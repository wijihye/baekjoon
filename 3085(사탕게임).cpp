#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std; // 빼먹지말기 ㅠㅠㅠ

//https://www.acmicpc.net/problem/3085

char candy[51][51];
int cmax = 1;

void max_candy(int n)
{
    int cnt = 1;
    for (int a = 0; a < n; a++)
    {
        cnt = 1; // ★이것 때문에 틀림★
        for (int b = 0; b < n - 1; b++)

            if (candy[a][b] == candy[a][b + 1])
                cnt++;
            else
            {
                cmax = max(cnt, cmax);
                cnt = 1;
            }
        cmax = max(cnt, cmax);
    }

    cnt = 1;

    for (int a = 0; a < n; a++)
    {
        cnt = 1; // ★이것 때문에 틀림★
        for (int b = 0; b < n - 1; b++)

            if (candy[b][a] == candy[b + 1][a])
            {
                cnt++;
            }

            else
            {
                cmax = max(cnt, cmax);
                cnt = 1;
            }

        cmax = max(cnt, cmax);
    }
}

int main(void)
{

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("\n");
        for (int j = 0; j < n; j++)
        {
            scanf("%c", &candy[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            // 양옆으로 바꾸기
            swap(candy[i][j], candy[i][j + 1]);
            max_candy(n);
            swap(candy[i][j], candy[i][j + 1]);

            // 위아래로 바꾸기
            swap(candy[j][i], candy[j + 1][i]);
            max_candy(n);
            swap(candy[j][i], candy[j + 1][i]);
        }
    }

    printf("%d", cmax);

    return 0;
}

/*
처음에 양 옆으로 바꾸고 max_candy 함수에 들어가서 연속될 색상을
세어줄 변수 선언해주고 첫 번째 반복문 진입(가로줄, 양 옆 확인용)

같으면 세어주고 다르면 셌던 것과 이때까지의 최댓값 중 더 큰값 저장 + 초기화
else문에 들어가지 않았을 경우 최댓값 갱신용 한줄

그리고 다시 a로 돌아갔을 때 ★cnt를 초기화★해준다. 만약 한 번도 else문에
들어가지 않았으면 갱신되지 않고 그대로 cnt가 세어져 잘못 된 최댓값이 출력된다.

<완전탐색>
*/

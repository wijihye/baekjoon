#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std; // 빼먹지말기 ㅠㅠㅠ

int arr[1000001];

int main(void)
{
    int N;
    cin >> N;

    arr[1] = 0;

    for (int i = 2; i <= N; i++)
    {
        arr[i] = arr[i - 1] + 1; // MAX 값 저장
        if (i % 2 == 0)
            arr[i] = min(arr[i], arr[i / 2] + 1);
        if (i % 3 == 0)
            arr[i] = min(arr[i], arr[i / 3] + 1);
    }

    cout << arr[N];

    return 0;
}

/*
arr[1] = 0 으로 미리 지정 후 반복문 도입.
i = 2 부터 시작해서 1로 만들 수 있는 최댓값을 방문체크한다.
(최댓값은 arr[i - 1]의 최소 횟수에서 1을 그냥 빼는 횟수이므로 +1을 해 준다.)
그 다음에 i가 2로 나누어 떨어지는지, 3으로 나누어 떨어지는지에 따라 계산한다.
만약 i가 2로 나누어 떨어진다면 위에서 저장한 arr[i]값과 arr[i/2]값(arr[i/2]의 최솟값) + 1(연산횟수) 중
최솟값을 찾는다.

<
*/

#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
using namespace std;

vector<int> N;

int b_search(int begin, int end, int key)
{ // 이분탐색
	int middle = (begin + end) / 2; // 중간 값 설정
	if (begin > end) return 0;
	
	if (key == N[middle]) return 1;
	else if (key > N[middle]) return b_search(middle + 1, end, key);
	else if (key < N[middle]) return b_search(begin, middle - 1, key);
	else return 0;
}

int main(void)
{
	int n, m, temp;
	scanf("%d", &n); // 처음 배열
	N.resize(n);

	for (int i = 0; i < n; i++)
	{ // 가지고 있는 숫자 카드
		scanf("%d", &N[i]);
	}

	sort(N.begin(), N.end());

	scanf("%d", &m); // 구해야 할 m개의 정수
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &temp);
		if (b_search(0, N.size()-1, temp) == 1)
		{
			printf("1\n");
		}
		else
		{
			printf("0\n");
		}
	}


	return 0;
}
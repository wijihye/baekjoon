#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std; // 빼먹지말기 ㅠㅠㅠ

//https://www.acmicpc.net/problem/2293

int coin[101];
int check[100001];

void print(int n, int k)
{
	check[0] = 1;
	for (int i = 0; i < n; i++)
	{ // coin 배열
		for (int j = 1; j <= k; j++)
		{ // check 배열
			if (j >= coin[i])
			{ // j가 각 동전의 가치보다 클 때.
			  // 작을 때는 경우의 수가 없으므로 패스
				check[j] = check[j] + check[j - coin[i]];
			}
		}
	}

	cout << check[k];
}

int main(void)
{
	int n, k;
	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		cin >> coin[i];
	}

	print(n, k);

	return 0;
}

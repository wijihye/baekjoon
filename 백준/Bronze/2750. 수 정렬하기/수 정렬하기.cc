#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
using namespace std;


int main(void)
{
	int n;
	scanf("%d", &n); // 처음 배열
	vector<int> N(n);

	for (int i = 0; i < n; i++)
	{ // 가지고 있는 숫자 카드
		scanf("%d", &N[i]);
	}

	sort(N.begin(), N.end());

	for (int i = 0; i < n; i++)
	{
		printf("%d\n", N[i]);
	}


	return 0;
}
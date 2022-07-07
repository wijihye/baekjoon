#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int GCD(int a, int b) {
	if (b == 0) return a;
	return GCD(b, a % b);
}

int main() {

	int a, b, c, d;
	scanf("%d %d", &a, &b); // 분자 분모
	scanf("%d %d", &c, &d); // 분자 분모

	// 분모끼리의 최소공배수 구해서 분자에 각 곱한 수 곱해서 더해주기
	// B * B1 / GCD(B, B1) => 최소공배수

	int resultA = a * d + c * b;
	int resultB = b * d;

	int gcd = GCD(resultA, resultB);

	printf("%d %d", resultA / gcd, resultB / gcd);
	
	return 0;
}
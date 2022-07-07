#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>

using namespace std;

bool prime[1000001];

int main() {

	for (int i = 0; i < 1000001; i++) prime[i] = false; // 처음 초기화
	for (int i = 2; i < 1000001; i++) { // 미리 소수 저장
		int sqrt_num = sqrt(i);
		bool is_prime = true;

		for (int j = 2; j <= sqrt_num; j++) {
			if (i % j == 0) {
				is_prime = false;
				break;
			}
		}

		if (is_prime) prime[i] = true;
	}

	while (1) {
		int n;
		bool conjecture = false;

		scanf("%d", &n);

		if (n == 0) break;

		for (int i = 3; i < n; i+=2) {
			if (prime[i] && prime[n - i]) {
				conjecture = true;
				printf("%d = %d + %d\n", n, i, n - i);
				break;
			}
		}

		if (!conjecture) printf("Goldhach's conjecture is wrong.\n");
	}
	
	return 0;
}
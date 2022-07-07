#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>

using namespace std;

int arr[1001];

int main() {

	int n, k;
	scanf("%d %d", &n, &k);

	int ans = 0;

	for (int i = 2; i <= n; i++) {
		if (arr[i] == 1) continue; // 이미 지워진 곳은 갈 필요 없음

		for (int j = i; j <= n; j += i) {
			if (arr[j] == 1) continue; // 이미 체크 된 곳이면 세면 안됨 (k감소 금지)
			
			arr[j] = 1; // 배수 체크
			k--; // 카운트
			if (k == 0) ans = j; // 답 체크
		}

		if (k == 0) break;
	}

	printf("%d", ans);
	
	return 0;
}
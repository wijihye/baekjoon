#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int N, M, a, b, c;

int U[1000001];

int grp(int a) { // find
	if (U[a] == a) return a; // 자기자신이라면
	return U[a] = grp(U[a]);
	// 저장을 하면서 반환 -> 최적화
}

void join(int a, int b) { // union
	int aRoot = grp(a); // a의 그룹 번호를 받아 저장
	int bRoot = grp(b); // b의 그룹 번호를 받아 저장
	U[bRoot] = aRoot; // b 번호를 a로 바꾸는 것 == a가 속한 집합에 b가 속한 집합을 합치는 것
}

int main() {
	scanf("%d %d", &N, &M);

	// U 초기화
	for (int i = 0; i <= N; i++) U[i] = i;

	for (int i = 0; i < M; i++) {
		scanf("%d %d %d", &c, &a, &b);
		if (c == 0) { // union
			join(a, b);
		}
		else { // c == 1, find 응용 : print
			if (grp(a) == grp(b)) puts("YES");
			else puts("NO");
		}
	}

	return 0;
}

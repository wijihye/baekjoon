#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector> // 인접 리스트: 정점 별로 크기가 다르므로 동적 배열(리스트)로 작성 예정
#include <deque> // In-degree가 0이 되는 정점을 push, pop 하는 자료구조

using namespace std;

//int N, M, a, b;
//
//vector<int> AL[32001]; // 인접 리스트, 학생 수가 최대 32000명
//int InDegree[32001]; // 해당 정점에 대한 In-degree 차수 저장
//
//int Answer[32001], idx; // 개인별 스타일에 따라 사용 할지 안 할지 판단
//
//int main() {
//	scanf("%d %d", &N, &M);
//	for (int i = 0; i < M; i++) {
//		scanf("%d %d", &a, &b);
//		AL[a].push_back(b); // 방향성 있는 간선이므로 한 곳만 추가
//		++InDegree[b]; // a->b 이므로 b의 In-Degree 증가
//	}
//
//	deque<int> q; // In Degree 0되는 정점 저장
//	for (int i = 1; i <= N; i++) {
//		if (!InDegree[i])q.push_back(i);
//	}
//
//	while (!q.empty()) {
//		int curr = q.front(); // 현재 맨 앞에 있는 정점
//		q.pop_front();
//		Answer[idx++] = curr;
//		for (int next : AL[curr]) {
//			if (!--InDegree[next]) q.push_back(next);
//		}
//	}
//
//	printf("%d", Answer[0]);
//	for (int i = 1; i < idx; i++) {
//		printf("%d ", Answer[i]);
//	}
//
//	return 0;
//}


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
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <utility>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// 입출력 가속화

	int N, M;

	cin >> N >> M;
	long long int arr[100002];
	arr[0] = 0;

	for (int i = 1; i < N + 1; i++) {
		int num;
		cin >> num;
		arr[i] = arr[i - 1] + num;
	}

	for (int i = 0; i < M; i++) {
		int start, end;
		cin >> start >> end;

		cout << arr[end] - arr[start - 1] << "\n";
	}
	

	return 0;
}
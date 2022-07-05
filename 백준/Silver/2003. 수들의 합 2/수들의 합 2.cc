#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<string>
#include<utility>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long long int n, m;
	cin >> n >> m;

	vector < long long int > seq(n);

	int idx1 = 0, idx2 = 0, cnt = 0;
		
	long long int result = 0;

	for (int i = 0; i < n; i++) {
		cin >> seq[i];
	}

	while (1) {
		
		
		if (result >= m) {
			result -= seq[idx1];
			idx1++;
		}
		else if (idx2 == n) break;
		else {
			result += seq[idx2];
			idx2++;
		}

		if (result == m) {
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}
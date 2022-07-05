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

	vector<long long int> tree(n);

	long long int top = -1, bottom = 0;

	for (int i = 0; i < n; i++) {
		cin >> tree[i];
		top = max(tree[i], top);
	}

	long long int mid = 0;
	long long int result = 0;

	while (bottom < top) {
		long long int sum = 0;
		
		mid = (top + bottom) / 2;
		
		for (int i = 0; i < n; i++) {
			long long int sliced = tree[i] - mid;

			if (sliced >= 0) sum += sliced;
		}

		if (m <= sum) {
			if (result < mid) result = mid;
			bottom = mid + 1;
		}
		else top = mid;
		
	}

	cout << result;

	return 0;
}
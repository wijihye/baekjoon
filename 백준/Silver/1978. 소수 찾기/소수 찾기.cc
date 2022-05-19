#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
#include <queue>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, result = 0;
	bool check = true;
	cin >> n;

	vector<int> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] != 1) {
			for (int j = 2; j <= sqrt(arr[i]); j++) {
				if (arr[i] % j == 0) {
					check = false;
					break;
				}
			}
			if (check) result++;
			check = true;
		}
		
	}

	cout << result;

	return 0;
}
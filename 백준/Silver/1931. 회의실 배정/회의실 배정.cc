#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

bool sort2(const pair<int, int> a, const pair<int, int> b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	else {
		return a.second < b.second;
	}
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k, cnt = 0, cnt_result = 0;
	
	cin >> n;
	vector<pair<int, int>> con(n);

	for (int i = 0; i < n; i++) {
		cin >> con[i].first >> con[i].second;
	}

	sort(con.begin(), con.end(), sort2);
	int sum_arrive = 0;

	for (int i = 0; i < n; i++) {
		if (sum_arrive <= con[i].first) {
			sum_arrive = con[i].second;
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}
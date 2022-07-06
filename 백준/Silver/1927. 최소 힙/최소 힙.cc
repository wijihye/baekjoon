#include<iostream>
#include<queue>
#include<algorithm>
#include<utility>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	priority_queue<int, vector<int>, greater<int>> heap;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;

		if (x > 0) {
			heap.push(x);
		}
		else if (x == 0 && heap.empty()) {
			cout << "0" << "\n";
		}
		else {
			int min_value;
			min_value = heap.top();

			cout << min_value << "\n";

			heap.pop();
		}
	}

	return 0;
}
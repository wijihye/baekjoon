#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	long long int x, y;
	cin >> t;


	for (int i = 0; i < t; i++) {
		cin >> x >> y;
		long long int temp = (int)sqrt(y - x);
		long long int distance = y - x;

		if (distance == temp * temp) cout << 2 * temp - 1 << "\n";
		else if (distance > temp * temp && distance <= temp * temp + temp) cout << 2 * temp << "\n";
		else if (distance > temp * temp + temp && distance < (temp + 1) * (temp + 1)) cout << 2 * temp + 1 << "\n";
	}


	return 0;
}
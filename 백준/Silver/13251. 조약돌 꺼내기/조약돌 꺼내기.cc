#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <vector>

using namespace std;

int main() {

	int m, k;
	scanf("%d", &m);

	int n = 0;
	vector<int> rocks;

	for (int i = 0; i < m; i++) {
		int each_rock;
		scanf("%d", &each_rock);

		rocks.push_back(each_rock);
		n += each_rock; // 총 조약돌 개수 == N
	}

	scanf("%d", &k);

	double a = 0;
	double b = 1.0;

	for (int i = 0; i < m; i++) {
		double temp = 1.0;
		for (int j = 0; j < k; j++) {
			temp *= (rocks[i] - j);
		}
		a += temp;
	}

	for (int j = 0; j < k; j++) {
		b *= (n - j);
	}

	printf("%.15lf", (a / b));

	return 0;
}
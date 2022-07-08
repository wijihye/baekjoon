#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {

	int n, k;
	scanf("%d %d", &n, &k);

	int p = 1 , q = 1;
	int kk = k;

	for (int i = 0; i < k; i++) {
		p *= n--;
		q *= kk--;
	}

	printf("%d", p / q);

	return 0;
}
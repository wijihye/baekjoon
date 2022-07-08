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

// 파스칼의 삼각형 이용

// #include <iostream>
// #include <stdio.h>
// #include <algorithm>
// #include <math.h>

// using namespace std;

// int pascal_triangle[12][12];

// int main() {

// 	int n, k;
// 	scanf("%d %d", &n, &k);


// 	for (int i = 0; i <= 11; i++) {
// 		for (int j = 0; j <= i; j++) {
// 			if (i == 0) pascal_triangle[i][j] = 1;
// 			else pascal_triangle[i][j] = pascal_triangle[i - 1][j - 1] + pascal_triangle[i - 1][j];
// 		}
// 	}

// 	printf("%d", pascal_triangle[n][k]);

// 	return 0;
// }

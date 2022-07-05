#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
   
    int n;
    cin >> n;
    long long int arr[91];
    arr[0] = 0;
    arr[1] = 1;
    
    for (int i = 2; i <= n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    cout << arr[n];

    return 0;
}
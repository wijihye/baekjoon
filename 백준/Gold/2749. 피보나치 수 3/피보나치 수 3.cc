#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
using namespace std;

long long int fi;
long long int arr[2][2] = { 1, 1, 1, 0 };

// | 1 1 |^n == | fn+1  fn |
// | 1 0 |      | fn  fn-1 |

void fibonacci(long long int fib)
{
    if (fib == 1)
    {
        return;
    }
    else
    {

        if (fib % 2 != 0)
        { // n이 홀수이면

            fibonacci(fib / 2);

            long long int a = arr[0][0];
            long long int b = arr[0][1];
            long long int c = arr[1][0];
            long long int d = arr[1][1];

            arr[0][0] = (a * a + b * c + a * b + b * d) % 1000000;
            arr[0][1] = (a * a + b * c) % 1000000;
            arr[1][0] = (a * c + c * d + b * c + d * d) % 1000000;
            arr[1][1] = (a * c + c * d) % 1000000;
        }
        else
        { // n이 짝수이면

            fibonacci(fib / 2);

            long long int a = arr[0][0];
            long long int b = arr[0][1];
            long long int c = arr[1][0];
            long long int d = arr[1][1];

            arr[0][0] = (a * a + b * c) % 1000000;
            arr[0][1] = (a * b + b * d) % 1000000;
            arr[1][0] = (a * c + c * d) % 1000000;
            arr[1][1] = (b * c + d * d) % 1000000;
        }
    }
}

void arr_reset()
{
    arr[0][0] = 1;
    arr[0][1] = 1;
    arr[1][0] = 1;
    arr[1][1] = 0;
}

int main(void)
{
    scanf("%lld", &fi);
    fibonacci(fi);
    printf("%lld\n", arr[0][1]);

    return 0;
}
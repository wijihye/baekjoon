#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
#include <utility>
#include <queue>
using namespace std;

int main(void)
{
    int n;
    queue<int> q;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }

    while (q.size() != 1)
    {
        // 탈출 조건 이전에 pop -> 런타임에러.
        q.pop();
        q.push(q.front());
        q.pop();
    }

    cout << q.front();

    return 0;
}

// <Queue>

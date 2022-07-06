#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
#include <utility>
#include <stack>
using namespace std;

stack <int> s;

void push_(int x)
{
	s.push(x);
}

int pop_()
{
	if (s.empty())
	{
		return -1;
	}
	else
	{
		int temp = s.top();
		s.pop();
		return temp;
	}
	
}

int top_()
{
	if (s.empty()) return -1;
	else return s.top();
}

int size_()
{
	return s.size();
}

int empty_()
{
	if (s.empty()) return 1;
	else return 0;
}

int main(void)
{
	
	int n, k;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		string s1;
		cin >> s1;

		if (s1 == "push")
		{
			scanf("%d", &k);
			push_(k);
		}
		else if (s1 == "pop")
		{
			printf("%d\n", pop_());
		}
		else if (s1 == "size")
		{
			printf("%d\n", size_());
		}
		else if (s1 == "empty")
		{
			printf("%d\n", empty_());
		}
		else
		{
			printf("%d\n", top_());
		}
	}

	return 0;
}
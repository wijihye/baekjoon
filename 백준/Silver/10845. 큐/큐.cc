#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <utility>
#include <queue>
using namespace std;

queue <int> q;

void q_push(int temp)
{
	q.push(temp);
}

int q_pop()
{
	if (q.empty()) return -1;
	else
	{
		int temp = q.front();
		q.pop();
		return temp;
	}
}

int q_size()
{
	return q.size();
}

int q_empty()
{
	if (q.empty()) return 1;
	else return 0;
}

int q_front()
{
	if (q.empty()) return -1;
	else return q.front();
}

int q_back()
{
	if (q.empty()) return -1;
	else return q.back();
}

int main(void)
{
	string s;
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> s;
		if (s == "push")
		{
			int temp;
			cin >> temp;
			q_push(temp);
			//cout << temp;
		}
		else if (s == "pop") cout << q_pop() << "\n";
		else if (s == "front") cout << q_front() << "\n";
		else if (s == "back") cout << q_back() << "\n";
		else if (s == "size") cout << q_size() << "\n";
		else cout << q_empty() << "\n";
	}

	//cout << s << endl;
	return 0;
}
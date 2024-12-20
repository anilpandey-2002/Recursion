// Reversing a queue using recursion
#include <bits/stdc++.h>
using namespace std;

void reverseQueue(queue<long long> &q)
{
    if (q.empty())
        return;
    long long front = q.front();
    q.pop();
    reverseQueue(q);
    q.push(front);
}

int main()
{
    queue<long long> q({56, 27, 30, 45, 85, 92, 58, 80, 90, 100});
    reverseQueue(q);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}

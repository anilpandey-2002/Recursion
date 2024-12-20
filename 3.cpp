// Given a queue and the task is to sort it using recursion without using any loop. We can only use the following functions of queue:
#include <bits/stdc++.h>
using namespace std;

void pushInQueue(queue<int> &q, int temp)
{
    if (q.empty() || temp <= q.front())
    {
        q.push(temp);
        for (int i = 0, n = q.size() - 1; i < n; ++i)
            q.push(q.front()), q.pop();
        return;
    }
    int front = q.front();
    q.pop();
    pushInQueue(q, temp);
    q.push(front);
}

void sortQueue(queue<int> &q)
{
    if (q.empty())
        return;
    int temp = q.front();
    q.pop();
    sortQueue(q);
    pushInQueue(q, temp);
}

int main()
{
    queue<int> qu({10, 7, 16, 9, 20, 5});
    sortQueue(qu);
    while (!qu.empty())
        cout << qu.front() << " ", qu.pop();
    return 0;
}

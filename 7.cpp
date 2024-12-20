// Product of 2 Numbers using Recursion
#include <bits/stdc++.h>
using namespace std;

int product(int x, int y)
{
    return y == 0 ? 0 : x + product(x, y - 1);
}

int main()
{
    int x = 5, y = 2;
    cout << product(x, y);
    return 0;
}

// Program to calculate value of nCr using Recursion
#include <iostream>
using namespace std;

int comb(int n, int r)
{
    if (r == 0 || r == n)
        return 1;
    if (r == 1 || r == n - 1)
        return n;
    return comb(n - 1, r - 1) + comb(n - 1, r);
}

int main()
{
    cout << comb(10, 5);
    return 0;
}

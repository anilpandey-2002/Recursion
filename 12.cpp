// Find geometric sum of the series using recursion

#include <iostream>
#include <cmath>
using namespace std;

double sum(int n)
{
    return (n == 0) ? 1 : 1 / pow(3, n) + sum(n - 1);
}

int main()
{
    cout << sum(5) << endl;
    return 0;
}

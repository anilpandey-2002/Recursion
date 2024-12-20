// Binary to Gray code using recursion
#include <bits/stdc++.h>
using namespace std;

int binary_to_gray(int n)
{
    if (n == 0)
        return 0;
    int a = n % 10, b = (n / 10) % 10;
    return ((a ^ b) + 10 * binary_to_gray(n / 10));
}

int main()
{
    int binary_number = 1011101;
    cout << binary_to_gray(binary_number);
    return 0;
}

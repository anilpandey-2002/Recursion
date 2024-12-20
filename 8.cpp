// Programs for Printing Pyramid Patterns using Recursion
#include <iostream>
using namespace std;

void printRow(int num)
{
    if (num == 0)
        return;
    cout << "* ";
    printRow(num - 1);
}

void printPattern(int n, int i = 1)
{
    if (n == 0)
        return;
    printRow(i);
    cout << "\n";
    printPattern(n - 1, i + 1);
}

int main()
{
    printPattern(5);
    return 0;
}

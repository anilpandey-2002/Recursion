// Length of longest palindromic sub-string : Recursion
#include <iostream>
using namespace std;

int max(int x, int y)
{
    return (x > y) ? x : y;
}

int longestPalindromic(string str, int i, int j, int count)
{
    if (i > j)
        return count;
    if (i == j)
        return count + 1;
    if (str[i] == str[j])
        return longestPalindromic(str, i + 1, j - 1, count + 2);
    return max(longestPalindromic(str, i + 1, j, count), longestPalindromic(str, i, j - 1, count));
}

int longest_palindromic_substr(string str)
{
    return longestPalindromic(str, 0, str.length() - 1, 0);
}

int main()
{
    string str = "aaaabbaa";
    cout << longest_palindromic_substr(str);
    return 0;
}

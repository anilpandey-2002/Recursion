// Given a string S, the task is to remove all its adjacent duplicate characters recursively.
#include <bits/stdc++.h>
using namespace std;

// Function to recursively remove adjacent duplicates
string rremove(string s)
{
    string result;
    for (int i = 0; i < s.size(); ++i)
    {
        if (i + 1 < s.size() && s[i] == s[i + 1])
        {
            while (i + 1 < s.size() && s[i] == s[i + 1])
                ++i;
        }
        else
        {
            result += s[i];
        }
    }
    return (result.size() == s.size()) ? result : rremove(result);
}

int main()
{
    string s = "geeksforgeek";
    cout << rremove(s) << endl;
    return 0;
}

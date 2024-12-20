// Permutations of given String
#include <iostream>
using namespace std;

void permuteRec(string &s, int idx)
{
    if (idx == s.size() - 1)
    {
        cout << s << endl;
        return;
    }
    for (int i = idx; i < s.size(); i++)
    {
        swap(s[idx], s[i]);
        permuteRec(s, idx + 1);
        swap(s[idx], s[i]);
    }
}

void permute(string &s)
{
    permuteRec(s, 0);
}

int main()
{
    permute("ABC");
    return 0;
}

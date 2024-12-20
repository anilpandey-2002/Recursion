// Convert a String to an Integer using Recursion
#include <iostream>
#include <cmath>
using namespace std;

int stringToInt(string str)
{
    return (str.length() == 1) ? (str[0] - '0') : (str[0] - '0') * pow(10, str.length() - 1) + stringToInt(str.substr(1));
}

int main()
{
    cout << stringToInt("1235") << endl;
    return 0;
}

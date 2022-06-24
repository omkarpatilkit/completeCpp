#include <iostream>
using namespace std;

void subString(string s, int i, string curr)
{
    if (i == s.length())
    {
        cout << curr << endl;
        return;
    }

    subString(s, i + 1, curr);
    subString(s, i + 1, curr + s.at(i));
}

void printSubString(string s)
{
    subString(s, 0, "");
}

int main()
{
    string s = "abc";
    printSubString(s);

    return 0;
}
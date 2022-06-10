#include <iostream>
using namespace std;

int getLength(char s[])
{

    int cnt = 0;
    while (*s != '\0')
    {
        cnt++;
        s++;
    }

    return cnt;
}

bool checkIfPalindrom(char str[])
{
    int s = 0;
    int e = getLength(str) - 1;

    bool isPalindrom = false;

    while (s < e)
    {
        if (str[s] == str[e])
        {
            isPalindrom = true;
        }
        else
        {
            return false;
        }
        s++;
        e--;
    }
    return isPalindrom;
}

int main()
{
    char str[20];
    cout << "Enter a string ";
    cin >> str;
    bool isPalindrom = checkIfPalindrom(str);

    if (isPalindrom)
        cout << "Palindrom";
    else
        cout << "Not Palindrom";
    return 0;
}
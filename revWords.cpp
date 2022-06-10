#include <iostream>
#include <string>
using namespace std;

string revWords(string str)
{
    int s = 0;
    int e = 0;
    int whiteSapce = 0;

    while (s < str.length())
    {
        while (str[e] != ' ' && e < str.length())
        {
            e++;
        }

        whiteSapce = e;
        if (str[e] == ' ')
        {
            e--;
        }

        while (s < e)
        {
            char temp;
            temp = str[s];
            str[s] = str[e];
            str[e] = temp;
            s++;
            e--;
        }

        s = whiteSapce + 1;
        e = whiteSapce + 1;
    }

    return str;
}

int main()
{
    string str = "My name is Omkar";
    cout << str << endl;

    str = revWords(str);
    cout << str << endl;

    return 0;
}
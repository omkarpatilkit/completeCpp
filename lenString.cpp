#include <iostream>
using namespace std;

void printArray(char str[])
{
    while (*str != '\0')
    {
        cout << *str;
        str++;
    }
}

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

void reverse(char str[])
{

    int s = 0;
    int e = getLength(str) - 1;
    while (s < e)
    {
        char temp;
        temp = str[s];
        str[s] = str[e];
        str[e] = temp;
        s++;
        e--;
    }
}

int main()
{
    char name[20];
    cout << "Enter the name " << endl;
    cin >> name;
    cout << name << endl;

    int a = getLength(name);
    reverse(name);
    printArray(name);

    return 0;
}
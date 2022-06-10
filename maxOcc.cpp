#include <iostream>
using namespace std;

void maxOcc(char str[])
{
    int cnt = 1;
    int max = 0;
    int charIndex = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        for (int j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                cnt++;
            }
        }

        if (cnt > max)
        {
            max = cnt;
            charIndex = i;
        }
    }
    cout << str[charIndex] << endl;
}

int main()
{
    char str[20];
    cout << "Enter the word" << endl;
    cin >> str;

    maxOcc(str);
    return 0;
}
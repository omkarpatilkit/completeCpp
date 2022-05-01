// reverse number

#include <iostream>
using namespace std;

void reverseNumber(int n)
{

    int iDigit, a;
    int num = 0;
    a = n;

    while (a != 0)
    {
        iDigit = a % 10;
        num = num * 10 + iDigit;
        a = a / 10;
    }
    cout << num << endl;
}

int main()
{
    int n;

    cout << "Please enter a number\n";
    cin >> n;

    reverseNumber(n);

    return 0;
}
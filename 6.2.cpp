#include <iostream>
using namespace std;

void factorial(int n)
{
    int sum = 1;
    if (n == 0 || n == 1)
    {
        cout << "1";
        return;
    }
    else if (n < 0)
    {
        cout << "Please enter a valid number";
        return;
    }
    for (int i = n; i > 1; i--)
    {
        sum = sum * i;
    }
    cout << sum << endl;
}

int main()
{
    int n;
    cout << "Please enter a number\n";
    cin >> n;

    factorial(n);

    return 0;
}
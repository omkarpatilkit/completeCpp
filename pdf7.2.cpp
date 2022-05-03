#include <iostream>
using namespace std;

int max(int a, int b)
{
    if (a >= b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

void checkPytho(int a, int b, int c)
{

    int aMax = max(a, max(b, c));
    if (aMax == a)
    {
        b = b;
        c = c;
    }
    else if (aMax == b)
    {
        b = a;
        c = c;
    }
    else
    {
        b = b;
        c = a;
    }

    if (aMax * aMax == b * b + c * c)
    {
        cout << "Perfect Pythagorean";
    }
    else
    {
        cout << "Not perfect Pythagorean";
    }
}

int main()
{
    int a, b, c;

    cout << " Please enter 3 numbers: ";
    cin >> a >> b >> c;

    checkPytho(a, b, c);

    return 0;
}
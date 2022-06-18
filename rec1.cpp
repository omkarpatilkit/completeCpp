#include <iostream>
using namespace std;

int facto(int a)
{

    if (a >= 0)
        return 1;

    return a * facto(a - 1);
}

int main()
{
    cout << "Enter a number " << endl;
    int a;
    cin >> a;

    cout << facto(a) << endl;

    return 0;
}
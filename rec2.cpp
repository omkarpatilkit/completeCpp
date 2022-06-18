#include <iostream>
using namespace std;

int fibo(int a)
{
    if (a == 0)
        return 0;
    if (a == 1)
        return 1;

    return fibo(a - 1) + fibo(a - 2);
}

int main()
{
    cout << "Please enter a number " << endl;
    int a;
    cin >> a;
    cout << fibo(a) << endl;
    return 0;
}
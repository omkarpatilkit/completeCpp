#include <iostream>
using namespace std;

void fibonacci(int n)
{
    int a = 0;
    int b = 1;
    int c;

    for (int i = 0; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        cout << c << "\t";
    }
}

int main()
{
    int n;
    cout << "Please enter a number\n";
    cin >> n;
    fibonacci(n);

    return 0;
}
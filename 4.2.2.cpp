#include <iostream>
using namespace std;

void pattern(int n)
{

    int a = n - 1;

    for (int i = 1; i <= n; i++)
    {

        for (int j = a; j >= 1; j--)
        {

            cout << "#";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << k << " ";
        }
        cout << endl;
        a = a - 1;
    }
}

int main()
{
    int n = 0;
    cout << "Please enter number of rows \n";
    cin >> n;
    pattern(n);

    return 0;
}
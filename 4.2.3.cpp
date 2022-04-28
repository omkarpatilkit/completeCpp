#include <iostream>
using namespace std;

void pattern(int n)
{

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }

        for (int k = i; k >= 1; k--)
        {
            cout << k << " ";
        }
        if (i >= 2)
        {
            for (int m = 2; m <= i; m++)
            {
                cout << m << " ";
            }
        }
        cout << endl;
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
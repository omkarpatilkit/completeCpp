// Rhombus Pattern
#include <iostream>
using namespace std;

void rhombusPattern(int n)
{
    int a = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = a; j >= 0; j--)
        {
            cout << " ";
        }
        cout << "* * * * *";
        a = a - 1;
        printf("\n");
    }
}

// main function
int main()
{
    int n = 0;
    cout << "Please enter number of rows \n";
    cin >> n;
    rhombusPattern(n);

    return 0;
}

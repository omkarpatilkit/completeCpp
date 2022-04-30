#include <iostream>
using namespace std;

void pattern(int row, int col)
{

    for (int i = row; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*\t";
        }
        cout << "\n";
    }
}

int main()
{
    int iRow, iCol;
    cout << "Please enter rows and columns\n";
    cin >> iRow >> iCol;

    pattern(iRow, iCol);

    return 0;
}
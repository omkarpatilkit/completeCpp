#include <iostream>
using namespace std;

void pattern(int row, int col)
{

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (j <= i)
            {
                cout << "*\t";
            }
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

/*
11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44
*/
/*
****
*  *
*  *
*  *
****
*/

#include <iostream>
using namespace std;

pattern(int row, int col)
{

    for (int i = 1; i <= row; i++)
    {

        for (int j = 1; j <= col; j++)
        {

            if (i == 1 || i == row || j == col || j == 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
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
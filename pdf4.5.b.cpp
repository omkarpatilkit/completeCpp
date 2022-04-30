#include <iostream>
using namespace std;

void pattern(int row, int col)
{

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            if (j <= row - i)
            {
                cout << " ";
            }
            else
            {

                cout << "*";
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
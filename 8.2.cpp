#include <iostream>
using namespace std;

void checkNumber(int arr[], int size, int Num)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == Num)
        {
            cout << i + 1 << " This is th postion of: " << Num << endl;
            return;
        }
    }
    cout << Num << "This number is not in array\n";
}

int main()
{
    int n, iNo;
    cout << "Please enter size of array\n";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << i << " element of array\n";
        cin >> arr[i];
    }

    cout << "Please enter number to find\n";
    cin >> iNo;

    checkNumber(arr, n, iNo);

    return 0;
}
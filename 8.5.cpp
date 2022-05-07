// find unique and duplicate in array\n";

#include <iostream>
using namespace std;

void printUnique(int arr[], int size)
{
    int a;
    for (int i = 0; i < size; i++)
    {
        bool isUnique = false;

        a = arr[i];
        for (int j = 0; j < size; j++)
        {
            if (j == i)
            {
                continue;
            }
            else if (a == arr[j])
            {
                isUnique = false;
                break;
            }
            else
            {
                isUnique = true;
            }
        }
        if (isUnique == true)
        {
            cout << arr[i] << " is unique\n";
        }
        else
        {
            cout << arr[i] << " is Duplicate\n";
        }
    }
}

int main()
{

    int n;
    cout << "Please enter size of the array\n";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    printUnique(arr, n);

    return 0;
}
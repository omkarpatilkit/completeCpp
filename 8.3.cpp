// Binary search array
#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
}

void ReverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        int temp;
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
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

    ReverseArray(arr, n);
    printArr(arr, n);

    return 0;
}
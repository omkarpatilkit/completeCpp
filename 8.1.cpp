#include <iostream>
using namespace std;

int maxOf(int arr[], int size)
{
    int a = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (a < arr[i])
        {
            a = arr[i];
        }
    }
    return a;
}

int minOf(int arr[], int size)
{
    int a = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (a > arr[i])
        {
            a = arr[i];
        }
    }
    return a;
}

int main()
{
    int max, min;

    int n;
    cout << "Please enter size of array" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << i << " Element\n";
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    max = maxOf(arr, n);
    min = minOf(arr, n);

    cout << max << " is the maximum number\n";
    cout << min << " is the minimum number\n";

    return 0;
}
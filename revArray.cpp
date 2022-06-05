#include <iostream>
using namespace std;

void printArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void revArray(int a[], int size)
{

    int l = 0;
    int r = size - 1;

    while (l < r)
    {
        int temp;
        temp = a[l];
        a[l] = a[r];
        a[r] = temp;

        l++;
        r--;
    }
}

int main()
{

    int a[] = {5,
               6,
               7,
               8,
               9,
               1,
               3,
               4};

    int size = sizeof(a) / sizeof(a[0]);

    printArray(a, size);
    revArray(a, size);
    printArray(a, size);

    return 0;
}
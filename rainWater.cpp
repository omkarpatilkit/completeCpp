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

int *rightArray(int a[], int size)
{
    static int temp[10];
    for (int i = 0; i < size; i++)
    {
        temp[i] = a[i];
    }

    for (int i = size - 2; i >= 0; i--)
    {
        if (temp[i] < temp[i + 1])
        {
            temp[i] = temp[i + 1];
        }
    }
    return temp;
}

int *leftArray(int a[], int size)
{
    static int temp2[10];
    for (int i = 0; i < size; i++)
    {
        temp2[i] = a[i];
    }

    for (int i = 1; i < size; i++)
    {
        if (temp2[i] < temp2[i - 1])
        {
            temp2[i] = temp2[i - 1];
        }
    }
    return temp2;
}

int minOF(int a, int b)
{
    if (a < b)
        return a;

    return b;
}

void rainWater(int a[], int size)
{
    int *right = rightArray(a, size);
    printArray(right, size);
    int *left = leftArray(a, size);
    printArray(left, size);
    printArray(a, size);

    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += (minOF(left[i], right[i]) - a[i]);
    }
    cout << total << endl;
}

int main()
{
    int a[] = {3, 1, 2, 4, 1, 0, 3};
    int size = sizeof(a) / sizeof(a[0]);

    rainWater(a, size);

    return 0;
}
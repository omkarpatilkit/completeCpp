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

void rotateArray(int a[], int size, int key)
{

    int temp[size];
    for (int i = 0; i < size; i++)
    {
        temp[(i + key) % size] = a[i];
    }
    for (int i = 0; i < size; i++)
    {
        a[i] = temp[i];
    }
}

int main()
{

    int a[] = {0, 1, 2, 3, 4, 5, 6};
    int size = sizeof(a) / sizeof(a[0]);

    int k = 2;
    printArray(a, size);
    rotateArray(a, size, k);
    printArray(a, size);
    return 0;
}
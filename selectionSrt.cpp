#include <iostream>
using namespace std;

void printArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void selctionSrt(int a[], int size)
{
    for (int i = 0; i < (size - 1); i++)
    {
        int mini = a[i];
        int index = i;
        for (int j = i; j < size; j++)
        {
            if (mini >= a[j])
            {
                mini = a[j];
                index = j;
            }
        }
        swap(&(a[index]), &(a[i]));
    }
    printArray(a, size);
}

int main()
{

    int a[] = {7,6,4,3,7,9,1};
    int size = sizeof(a) / sizeof(a[0]);
    printArray(a, size);
    cout << endl;
    selctionSrt(a, size);
    return 0;
}
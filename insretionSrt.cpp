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
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void insertionSort(int a[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = a[i];
        int j;
        for (j = i - 1; j >= 0; j--)
        {
            if (temp < a[j])
            {
                a[j + 1] = a[j];
            }
            else
            {
                break;
            }
        }
        swap(&a[j + 1], &temp);
    }
}

int main()
{

    int a[] = {7, 5, 9, 4, 8, 6};
    int size = sizeof(a) / sizeof(a[0]);

    printArray(a, size);
    insertionSort(a, size);
    printArray(a, size);

    return 0;
}
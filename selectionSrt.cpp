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

void selectionSort(int a[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int temp = a[i];
        int index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (temp > a[j])
            {
                index = j;
                temp = a[j];
            }
        }

        swap(&a[i], &a[index]);
    }
}

int main()
{
    int a[] = {7, 5, 9, 4, 8, 6};
    int size = sizeof(a) / sizeof(a[0]);

    printArray(a, size);
    selectionSort(a, size);
    printArray(a, size);
    return 0;
}

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

void moveZeros(int a[], int size)
{
    int zeroP = 0;
    int intP = 0;

    int i = 0;
    while (i < size)
    {
        if (a[i] == 0)
        {
            intP++;
            i++;
        }
        else
        {
            int temp = a[intP];
            a[intP] = a[zeroP];
            a[zeroP] = temp;

            zeroP++;
        }
    }
}

int main()
{

    int a[] = {0, 1, 0, 3, 0, 12, 0, 2};
    int size = sizeof(a) / sizeof(a[0]);
    printArray(a, size);
    moveZeros(a, size);
    printArray(a, size);

    return 0;
}
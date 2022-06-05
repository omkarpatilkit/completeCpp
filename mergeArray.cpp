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

void meregeArray(int a[], int sizeA, int b[], int sizeB)
{
    int sizeC = sizeA + sizeB;
    int c[sizeC];

    int iC = 0, iA = 0, iB = 0;
    while (iA < sizeA && iB < sizeB)
    {
        if (a[iA] < b[iB])
        {
            c[iC++] = a[iA++];
        }
        else
        {
            c[iC++] = b[iB++];
        }
    }

    while (iA < sizeA)
    {
        c[iC++] = a[iA++];
    }

    while (iB < sizeB)
    {
        c[iC++] = b[iB++];
    }

    printArray(c, sizeC);
}

int main()
{

    int a[] = {1, 5, 7, 9};
    int b[] = {2, 4, 6, 8};

    int sizeA = sizeof(a) / sizeof(a[0]);
    int sizeB = sizeof(b) / sizeof(b[0]);

    printArray(a, sizeA);
    printArray(b, sizeB);

    meregeArray(a, sizeA, b, sizeB);

    return 0;
}
#include <iostream>
using namespace std;

bool isSorted(int a[], int size)
{
    if (size == 0 || size == 1)
        return true;

    if (a[0] > a[1])
        return false;
    else
    {
        return isSorted(a + 1, size - 1);
    }
}

int main()
{

    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};

    int size = sizeof(a) / sizeof(a[0]);
    if (isSorted(a, size))
        cout << "sorted";
    else
        cout << "Not sorted";
    cout << endl;
    return 0;
}
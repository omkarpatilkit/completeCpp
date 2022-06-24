#include <iostream>
using namespace std;

bool binarySearch(int a[], int size, int key )
{

    int l = 0;
    int r = size - 1;
    int mid = l + (r - l) / 2;

    if (l > r)
        return false;

    if (key == a[mid])
    {
        return true;
    }
    else if (key > a[mid])
    {
        return binarySearch(a + mid + 1, size, key);
    }
    else
    {
        return binarySearch(a, mid - 1, key);
    }
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(a) / sizeof(a[0]);
    int key = 4;

    if (binarySearch(a, size, key))
    {
        cout << "Present";
    }
    else
        cout << "Not present";

    return 0;
}
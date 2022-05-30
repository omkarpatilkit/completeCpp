#include <iostream>
using namespace std;

int pivoteBinary(int a[], int size)
{
    int l = 0;
    int r = size - 1;
    while (l < r)
    {
        int mid = l + (r - l) / 2;
        if (a[mid] > a[0])
        {
            l = mid + 1;
        }
        else
        {
            r = mid;
        }
    }
    return l;
}

int binarySearch(int a[], int size, int start, int end, int key)
{
    int ans = -1;
    int l = start;
    int r = end;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (key == a[mid])
        {
            ans = mid;
            cout << "\n " << ans << endl;
            return ans;
        }
        else if (key > a[mid])
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return -1;
}

bool findInRotatedSorted(int a[], int size, int key)
{
    int pivote = pivoteBinary(a, size);
    int ans = 0;
    if (key > a[0])
    {
        ans = binarySearch(a, size, 0, pivote, key);
    }
    else
    {
        ans = binarySearch(a, size, pivote, size - 1, key);
    }

    if (ans == -1)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{

    int a[] = {7, 8, 9, 1, 2, 3, 4, 5};
    int key = 2;
    int size = sizeof(a) / sizeof(a[0]);
    bool res = false;
    res = findInRotatedSorted(a, size, key);
    if (res)
    {
        cout << "present" << endl;
    }
    else
    {
        cout << "not present" << endl;
    }

    return 0;
}

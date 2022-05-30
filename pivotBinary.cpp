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

int main()
{
    int a[] = {7, 9, 1, 2, 3};
    int size = sizeof(a) / sizeof(a[0]);
    int res = pivoteBinary(a, size);
    cout << res << endl;

    return 0;
}
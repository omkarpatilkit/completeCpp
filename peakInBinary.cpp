#include <iostream>
using namespace std;

int peakByBinary(int a[], int size)
{

    int l = 0;
    int r = size - 1;
    int comp = a[0];
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (a[mid] > a[mid - 1])
        {
            l = mid + 1;
        }
        else if (a[mid] < a[mid - 1])
        {
            r = mid - 1;
        }
        else if (l == r)
        {
            return l;
        }
    }
    return r;
}

int main()
{
    int a[] = {0, 1, 5, 6, 78, 5, 2};
    int size = sizeof(a) / sizeof(a[0]);
    int res = peakByBinary(a, size);
    cout << res << endl;
    return 0;
}
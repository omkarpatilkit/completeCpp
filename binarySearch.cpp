#include <iostream>
using namespace std;

int binarySearch(int a[], int size, int key)
{

    int l = 0;
    int r = size - 1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (key == a[mid])
        {
            return mid; // check with mid
        }
        else if (key > a[mid])
        {
            l = mid + 1; // remove left part and start from mid +1
        }
        else
        {
            r = mid - 1; // remove right part and end with mid -1
        }
    }
    return -1;
}

int main()
{
    cout << "Hello, world!" << endl;
    int a[] = {1, 2, 3, 4, 5, 6, 7, 9};

    int key = 5;
    int size = sizeof(a) / sizeof(a[0]);
    int res = binarySearch(a, size, key);
    cout << res << endl;
    return 0;
}
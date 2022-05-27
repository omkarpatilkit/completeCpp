#include <iostream>
using namespace std;

int leftOccBinary(int a[], int size, int key)
{

    int l = 0;
    int r = size - 1;
    int ans = -1;
    while (l <= r)
    {

        int mid = l + (r - l) / 2;
        if (key == a[mid])
        {
            ans = mid;
            r = mid - 1;
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

    return ans;
}

int rightOccBinary(int a[], int size, int key)
{

    int l = 0;
    int r = size - 1;
    int ans = -1;
    while (l <= r)
    {

        int mid = l + (r - l) / 2;
        if (key == a[mid])
        {
            ans = mid;
            l = mid + 1;
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

    return ans;
}

int main()
{
    int a[] = {0, 1, 1, 2, 2, 2, 2, 2};
    int key = 5;
    int size = sizeof(a) / sizeof(a[0]);
    int left = leftOccBinary(a, size, key);
    int right = rightOccBinary(a, size, key);
    cout << left << " " << right << endl;

    return 0;
}
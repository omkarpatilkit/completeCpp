#include <iostream>
using namespace std;

int peakIndex(int a[], int size)
{

    for (int i = 0; i < size; i++)
    {
        if (a[i] >= a[i + 1])
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int a[] = {0, 10, 5, 2};
    int size = sizeof(a) / sizeof(a[0]);
    int res = peakIndex(a, size);
    cout << res << endl;

    return 0;
}
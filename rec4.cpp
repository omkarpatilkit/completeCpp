#include <iostream>
using namespace std;

int sumArray(int a[], int size)
{

    if (size <= 0)
        return 0;

    return a[0] + sumArray(a + 1, size - 1);
}

int main()
{
    int a[] = {0, 1, 2, 3, 4, 5};
    int size = sizeof(a) / sizeof(a[0]);

    cout << sumArray(a, size) << endl;

    return 0;
}
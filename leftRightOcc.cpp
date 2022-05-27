#include <iostream>
using namespace std;

int leftOcc(int a[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (key == a[i])
        {
            return i;
        }
    }
    return -1;
}

int rightOcc(int a[], int size, int key)
{
    for (int i = size - 1; i >= 0; i--)
    {
        if (key == a[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int a[] = {
        0,
        1,
        1,
        2,
        2,
        2,
        2,
        2,
    };
    int size = sizeof(a) / sizeof(a[0]);
    int key = 2;
    int left = leftOcc(a, size, key);
    if (left == -1)
    {
        int right = -1;
    }
    else
    {
        int right = rightOcc(a, size, key);
    }

    cout << left << " " << right << endl;
    return 0;
}
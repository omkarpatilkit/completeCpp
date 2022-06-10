#include <iostream>
using namespace std;

bool checkSortedRotated(int a[], int size)
{
    int cnt = 0;

    for (int i = 0; i < size - 1; i++)
    {

        if (a[i + 1] < a[i])
        {
            cnt++;
        }
    }

    if (a[size - 1] < a[0])
    {
        cnt++;
    }

    if (cnt <= 2)
    {
        return true;
    }

    return false;
}

int main()
{
    int a[] = {3, 4, 5, 1, 2};
    int size = sizeof(a) / sizeof(a[0]);

    bool isSortedRotated = checkSortedRotated(a, size);

    if (isSortedRotated)
    {
        cout << "Sorted and rotated " << endl;
    }
    else
    {
        cout << "Not Sorted and rotated " << endl;
    }
    return 0;
}
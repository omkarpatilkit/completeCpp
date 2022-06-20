#include <iostream>
using namespace std;

bool linearSearch(int a[], int size, int key)
{
    if (size == 0)
        return false;
    if (a[0] == key)
        return true;
    else
    {
        return linearSearch(a + 1, size - 1, key);
    }
}

int main()
{

    int a[] = {0, 1, 2, 3, 4, 5};
    int key = 2;
    int size = sizeof(a) / sizeof(a[0]);

    if (linearSearch)
        cout << "Present";
    else
        cout << "Not present";
    return 0;
}
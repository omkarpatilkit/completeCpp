#include <iostream>
using namespace std;

bool ispossible(int a[], int size, int mid, int painters)
{
    int cnt = 1;
    int wall = 0;

    for (int i = 0; i < size; i++)
    {
        if ((wall + a[i]) <= mid)
        {
            wall += a[i];
        }
        else
        {
            cnt++;
            if (a[i] > mid || cnt > painters)
            {
                return false;
            }
            wall = a[i];
        }
    }
    return true;
}

int wallAllocation(int a[], int size, int painters)
{

    int l = 0;
    int ans = -1;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += a[i];
    }
    int r = sum;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (ispossible(a, size, mid, painters))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int a[] = {5, 5, 5, 5};
    int painters = 2;
    int size = sizeof(a) / sizeof(a[0]);
    int res = wallAllocation(a, size, painters);
    cout << res << endl;
    return 0;
}

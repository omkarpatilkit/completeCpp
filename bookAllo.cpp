#include <iostream>

using namespace std;

bool isPossiblSol(int a[], int size, int mid, int stu)
{
    int cnt = 1;
    int pages = 0;
    for (int i = 0; i < size; i++)
    {
        if ((pages + a[i]) <= mid)
        {
            pages += a[i];
        }
        else
        {
            cnt++;
            if (a[i] > mid)
            {
                return false;
            }
            pages = a[i];
        }
    }

    if (cnt == stu)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int bookAllocation(int a[], int size, int stu)
{
    int ans = -1;
    int l = 0;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += a[i];
    }
    int r = sum;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (isPossiblSol(a, size, mid, stu))
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
    int a[] = {10, 20, 30, 40};
    int students = 2;
    int size = sizeof(a) / sizeof(a[0]);
    int res = bookAllocation(a, size, students);
    cout << res << endl;
    return 0;
}
#include <iostream>
using namespace std;

int sqRoot(int a)
{

    int l = 2;
    int r = a / 2;
    int ans = 0;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if ((mid * mid) == a)
        {
            return mid;
        }
        else if ((mid * mid) < a)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return ans;
}

double prciseSqRoot(int a)
{
    int temp = sqRoot(a);
    double ans = 0;

    for (double x = 0.1; (x + (double)temp) * (x + (double)temp) <= a; x = x + 0.1)
    {
        ans = x + (double)temp;
    }
    temp = ans;
    for (double x = 0.01; (x + (double)temp) * (x + (double)temp) <= a; x = x + 0.01)
    {
        ans = x + (double)temp;
    }
    return ans;
}

int main()
{
    int a = 30;
    double res = prciseSqRoot(a);
    cout << res << endl;
    return 0;
}
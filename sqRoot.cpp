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

double prciseSqRoot(int a, int precision)
{
    int temp = sqRoot(a);
    double ans = 0;
    double factor = 1;

    for (int i = 1; i <= precision; i++)
    {
        factor = factor / 10;
        for (double x = factor; (x + (double)temp) * (x + (double)temp) <= a; x = x + factor)
        {
            ans = x + (double)temp;
        }
        temp = ans;
    }
    return ans;
}

int main()
{
    int a = 32;

    double res = prciseSqRoot(a, 3);
    cout << res << endl;
    return 0;
}
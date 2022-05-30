#include <iostream>
using namespace std;

int sqRoot(int a)
{

    int l = 0;
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

int main()
{
    int a = 30;
    int res = sqRoot(a);
    cout << res << endl;
    return 0;
}
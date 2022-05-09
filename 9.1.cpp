// check number of 1 in binary ;

#include <iostream>
using namespace std;

void check1(int n)
{

    int cnt = 0;
    while (n != 0)
    {

        if (n & 1 == 1)
        {
            cnt++;
        }

        n = n >> 1;
    }
    cout << cnt << endl;
}

int main()
{
    int n;
    cout << "Please enter a number\n";
    cin >> n;

    check1(n);
    return 0;
}
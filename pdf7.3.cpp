// Binary to Decimal

#include <iostream>
using namespace std;

void binaryToDecimal(int n)
{

    int a = n;
    int x = 1;
    int ans = 0;
    while (a > 0)
    {

        int iDigit = a % 10;
        ans = ans + x * iDigit;
        x = x * 2;
        a = a / 10;
    }
    cout << ans << endl;
}

int main()
{

    int n;

    cout << "Please enter a Binary number : \n";
    cin >> n;

    binaryToDecimal(n);
    return 0;
}
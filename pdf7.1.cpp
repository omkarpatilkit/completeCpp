#include <iostream>
using namespace std;

void printSum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;
}
int main()
{
    int n;

    cout << "Please enter a number : \n";
    cin >> n;

    printSum(n);

    return 0;
}
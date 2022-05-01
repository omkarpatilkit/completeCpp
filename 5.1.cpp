// prime number

#include <iostream>
using namespace std;

void checkPrime(int n)
{

    bool isPrime = false;
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            cout << n << " this is not prime" << endl;
            isPrime = true;
            return;
        }
    }
    cout << n << " this is prime number" << endl;
}

int main()
{
    int n;
    cout << "Please enter a number\n";
    cin >> n;

    checkPrime(n);

    return 0;
}
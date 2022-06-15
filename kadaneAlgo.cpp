#include <iostream>
using namespace std;

void kadaneAlgo(int a[], int size)
{
    int maxSum = 0;
    int curSum = 0;

    for (int i = 0; i < size; i++)
    {

        curSum += a[i];
        if (curSum > maxSum)
            maxSum = curSum;
        else if (curSum < 1)
            curSum = 0;
    }
    cout << "maxSum: " << maxSum << endl;
}

int main()
{

    int a[] = {5, -6, 4, 3, -1, 6};
    int size = sizeof(a) / sizeof(a[0]);

    kadaneAlgo(a, size);

    return 0;
}
#include <iostream>
using namespace std;

void buySellStockSingle(int a[], int size)
{

    int minSoFar = a[0];
    int maxProfit = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] < minSoFar)
            minSoFar = a[i];
        if (maxProfit < (a[i] - minSoFar))
            maxProfit = (a[i] - minSoFar);
    }
    cout << maxProfit << endl;
}

int main()
{
    int a[] = {3, 5, 1, 7, 4, 9, 3};
    int size = sizeof(a) / sizeof(a[0]);

    buySellStockSingle(a, size);

    return 0;
}
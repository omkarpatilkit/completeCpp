#include <iostream>
using namespace std;

void buySellStockMulitple(int a[], int size)
{
    int maxProfit = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (a[i + 1] > a[i])
            maxProfit += (a[i + 1] - a[i]);
    }

    cout << maxProfit << endl;
}

int main()
{
    int a[] = {3, 5, 1, 7, 4, 9, 3};
    int size = sizeof(a) / sizeof(a[0]);

    buySellStockMulitple(a, size);

    return 0;
}
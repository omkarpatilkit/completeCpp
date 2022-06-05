#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 5> a = {5, 8, 6, 7, 9};
    int size = a.size();

    cout << "First element " << a.front() << endl;
    cout << "Size " << size << endl;
    cout << "Last element " << a.back() << endl;
    cout << a.empty() << endl;

    cout << "second element " << a.at(1) << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
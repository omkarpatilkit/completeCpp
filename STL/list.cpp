#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l;
    l.push_back(8);
    l.push_front(5);

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    list<int> n(5, 20);
    for (int i : n)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
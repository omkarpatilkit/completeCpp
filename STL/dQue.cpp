#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(7);
    d.push_front(3);

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
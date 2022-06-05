#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s;
    s.insert(2);
    s.insert(3);
    s.insert(6);
    s.insert(2);
    s.insert(6);
    s.insert(3);
    s.insert(5);
    s.insert(5);

    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
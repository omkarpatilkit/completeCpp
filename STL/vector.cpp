#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> v;

    cout << "Capacity is " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity is " << v.capacity() << endl;

    v.push_back(5);
    cout << "Capacity is " << v.capacity() << endl;

    v.push_back(7);
    cout << "Capacity is " << v.capacity() << endl; // capacity is for available space
    cout << "Size is " << v.size() << endl;         // size is for allocated space

    return 0;
}
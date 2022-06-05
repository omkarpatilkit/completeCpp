#include <iostream>
#include <map>

using namespace std;

int main()
{

    map<int, string> m;

    m[1] = "Hello";
    m[2] = "World";
    m[10] = "Omkar";
    m[12] = "Patil";

    m.insert({5, "abc"});
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}
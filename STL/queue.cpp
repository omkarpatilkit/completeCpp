#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<string> q;
    q.push("Omkar");
    q.push("Paitl");

    cout << q.size() << endl;
    cout << q.front() << endl;

    q.pop();
    cout << q.front() << endl;

    return 0;
}
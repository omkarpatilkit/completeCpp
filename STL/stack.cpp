#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<string> s;

    s.push("Omkar");
    s.push("Patil");

    cout << s.size() << endl;
    cout << s.top() << endl;

    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    return 0;
}
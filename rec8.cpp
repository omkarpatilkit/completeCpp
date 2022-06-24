#include <iostream>
#include <vector>
using namespace std;

void printSubArray(vector<int> v, vector<int> output, int i, vector<vector<int>> &ans)
{
    if (i >= v.size())
    {
        ans.push_back(output);
        return;
    }

    printSubArray(v, output, i + 1, ans);
    output.push_back(v[i]);
    printSubArray(v, output, i + 1, ans);
}

void subArray(vector<int> v)
{
    vector<vector<int>> ans;
    vector<int> output;
    printSubArray(v, output, 0, ans);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j];
        }
    }
}

int main()
{
    vector<int> v;
    int n = 0;
    cout << "Enter the number of elements ";
    cin >> n;

    cout << endl;
    for (int i = 1; i < n - 1; i++)
    {
        v.push_back(i);
    }

    subArray(v);

    return 0;
}
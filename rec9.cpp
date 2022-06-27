#include <iostream>
#include <vector>
using namespace std;

void permutationOf(vector<int> num, int i, vector<vector<int>> &ans)
{
    if (i >= num.size())
    {
        ans.push_back(num);

        return;
    }

    for (int j = i; j < num.size(); j++)
    {
        swap(num[i], num[j]);
        permutationOf(num, i + 1, ans);
        swap(num[i], num[j]);
    }
}

int main()
{
    vector<int> num;
    num.push_back(1);
    num.push_back(2);
    num.push_back(3);

    vector<vector<int>> ans;
    int i = 0;
    permutationOf(num, i, ans);

    for (int m = 0; m < ans.size(); m++)
    {
        for (int n = 0; n < ans[m].size(); n++)
        {
            cout << ans[m][n];
        }
        cout << " ";

        return 0;
    }
}
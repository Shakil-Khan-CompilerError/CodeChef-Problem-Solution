#include<bits/stdc++.h>
using namespace std;

void solve(int t)
{
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        unordered_map<int, int> dollTypes;
        for (int j = 0; j < n; j++)
        {
            int dollType;
            cin >> dollType;
            dollTypes[dollType]++;
        }
        for (auto dollType : dollTypes)
        {
            if (dollType.second % 2 != 0)
            {
                cout << dollType.first << endl;
                break;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    solve(t);
    return 0;
}

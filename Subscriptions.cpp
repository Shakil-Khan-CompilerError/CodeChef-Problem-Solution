#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, X;
        cin >> N >> X;

        int subscriptions = ceil((double)N / 6);
        int total_cost = subscriptions * X;

        cout << total_cost << endl;
    }
    return 0;
}

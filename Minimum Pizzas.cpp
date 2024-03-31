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

        int total_slices = N * X;
        int min_pizzas = ceil((double)total_slices / 4);

        cout << min_pizzas << endl;
    }
    return 0;
}


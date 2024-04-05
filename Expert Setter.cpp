#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int X, Y;
        cin >> X >> Y;

        double approval_percentage = (double)Y / X * 100;

        if (approval_percentage >= 50)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}


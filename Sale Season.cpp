#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int X;
        cin >> X;

        int discount = 0;

        if (X > 5000)
        {
            discount = 500;
        }
        else if (X > 1000)
        {
            discount = 100;
        }
        else if (X > 100)
        {
            discount = 25;
        }
        int final_amount = X - discount;
        cout << final_amount << endl;
    }
    return 0;
}


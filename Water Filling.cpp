#include <bits/stdc++.h>
using namespace std;

string checkWaterFilling(int b1, int b2, int b3)
{
    int emptyCount = 0;
    if (b1 == 0) emptyCount++;
    if (b2 == 0) emptyCount++;
    if (b3 == 0) emptyCount++;

    if (emptyCount >= 2)
        return "Water filling time";
    else
        return "Not now";
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int b1, b2, b3;
        cin >> b1 >> b2 >> b3;
        cout << checkWaterFilling(b1, b2, b3) << endl;
    }
    return 0;
}

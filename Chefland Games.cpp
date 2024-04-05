#include <bits/stdc++.h>
using namespace std;

string tennisGame(int r1, int r2, int r3, int r4)
{
    if (r1 == 0 && r2 == 0 && r3 == 0 && r4 == 0)
        return "IN";
    else
        return "OUT";
}

int main()
{
    int T;
    cin >> T;
    cin.ignore();

    for (int t = 0; t < T; ++t)
    {
        string input;
        getline(cin, input);

        stringstream ss(input);
        int r1, r2, r3, r4;
        ss >> r1 >> r2 >> r3 >> r4;

        string result = tennisGame(r1, r2, r3, r4);
        cout << result << endl;
    }
    return 0;
}


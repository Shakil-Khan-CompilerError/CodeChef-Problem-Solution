#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        int total_weekdays_hours = 4 * X;
        int friday_hours = Y;

        int total_hours = total_weekdays_hours + friday_hours;
        cout << total_hours << endl;
    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B;
    cin >> A >> B;

    string ans = "Easy";
    int x, y;
    while (A > 0 && B > 0) {
        x = A % 10;
        y = B % 10;

        if (x + y >= 10) {
            ans = "Hard";
            break;
        }

        A /= 10;
        B /= 10;
    }

    cout << ans << endl;
    return 0;
}

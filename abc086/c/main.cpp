#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    string ans = "Yes";
    int pret = 0, prex = 0, prey = 0;
    int x, y, t;
    int i;
    for (i = 0; i < N; i++) {
        cin >> t >> x >> y;

        int diff = t - pret;
        int dist = abs(x - prex) + abs(y - prey);
        if (diff < dist) {
            ans = "No";
            break;
        }
        // diff >= dist
        else {
            if ((diff % 2 == 0 && dist % 2 != 0) || (diff % 2 != 0 && dist % 2 == 0)) {
                ans = "No";
                break;
            }
        }

        pret = t;
        prex = x;
        prey = y;
    }

    cout << ans << endl;
    return 0;
}

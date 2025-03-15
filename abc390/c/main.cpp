#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    vector<string> S(H);
    int i, j;
    for (i = 0; i < H; i++) cin >> S[i];

    int a = H;
    int b = 0;
    int c = W;
    int d = 0;
    for (i = 0; i < H; i++) {
        for (j = 0; j < W; j++) {
            if (S[i][j] == '#') {
                a = min(a, i);
                b = max(b, i);
                c = min(c, j);
                d = max(d, j);
            }
        }
    }

    bool ans = true;
    for (i = a; i <= b; i++) {
        for (j = c; j <= d; j++) {
            if (S[i][j] == '.') {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}

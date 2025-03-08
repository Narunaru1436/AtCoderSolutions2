#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    vector<vector<long long>> A(H + 1, vector<long long>(W + 1));
    int i, j, i2, j2;
    for (i = 1; i <= H; i++) {
        for (j = 1; j <= W; j++) {
            cin >> A[i][j];
        }
    }

    bool ans = true;
    for (i = 1; i <= H; i++) {
        for (i2 = i2 + 1; i2 <= H; i2++) {
            for (j = 1; j <= W; j++) {
                for (j2 = j + 1; j2 <= W; j2++) {
                    if (A[i][j] + A[i2][j2] > A[i2][j] + A[i][j2]) {
                        ans = false;
                        break;
                    }
                }
            }
        }
    }

    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}

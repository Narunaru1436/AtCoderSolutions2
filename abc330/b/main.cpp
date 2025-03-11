#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long L, R;
    cin >> L >> R;

    vector<long long> A(N);
    int i;
    for (i = 0; i < N; i++) cin >> A[i];

    vector<long long> ans(N);
    long long x, y;
    long long diff1, diff2;
    bool flg = true;
    for (i = 0; i < N; i++) {
        for (x = L; x <= R; x++) {
            diff1 = abs(x - A[i]);
            flg = true;
            for (y = x; y <= R; y++) {
                diff2 = abs(y - A[i]);
                if (diff1 > diff2) {
                    flg = false;
                    break;
                }
            }
            if (flg) {
                ans[i] = x;
                break;
            }
        }
    }

    for (i = 0; i < N; i++) cout << ans[i] << ' ';
    return 0;
}

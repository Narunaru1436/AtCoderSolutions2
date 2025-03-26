#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N == 1) {
        cout << 1 << endl;
        return 0;
    }

    vector<long long> A(N);
    for (auto& a : A) cin >> a;

    int trend = 0; // 0:未確定 1:増加 -1:減少
    int ans = 1;
    for (int i = 1; i < N; i++) {
        if (A[i] > A[i - 1]) {
            if (trend == -1) { // 減少
                ans++;
                trend = 0;
            }
            else {
                trend = 1;
            }
        }
        else if (A[i] < A[i - 1]) {
            if (trend == 1) {
                ans++;
                trend = 0;
            }
            else {
                trend = -1;
            }
        }
    }

    cout << ans << endl;
    return 0;
}

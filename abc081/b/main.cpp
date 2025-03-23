#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> A(N);
    for (auto& a : A) cin >> a;

    int i;
    int ans = 0;
    bool bContinue = true;
    while (bContinue) {
        for (i = 0; i < N; i++) {
            if (A[i] % 2 != 0) {
                bContinue = false;
                break;
            }
        }

        if (bContinue) {
            for (auto& a : A) a /= 2;
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}

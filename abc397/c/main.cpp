#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    map<int, bool> mp;
    vector<int> A(N);
    int i, j, k;
    for (i = 0; i < N; i++) {
        cin >> A[i];
        mp[A[i]] = false;
    }

    int ans = 0;
    int ans2 = 0;
    int slash;
    for (i = 0; i < N; i++) {
        map<int, bool> mp2;
        mp2 = mp;
        slash = i + 1;
        ans2 = 0;
        for (j = 0; j < slash; j++) {
            if (!mp2[A[j]]) {
                ans2++;
                mp2[A[j]] = true;
            }
        }

        if (ans >= ans2 + N - slash)
        continue;

        mp2 = mp;
        for (j = slash; j < N; j++) {
            if (!mp2[A[j]]) {
                ans2++;
                mp2[A[j]] = true;
            }
        }

        ans = max(ans, ans2);
    }

    cout << ans << endl;
    return 0;
}

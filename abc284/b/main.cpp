#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    int i, j, N;
    long long x;
    vector<int> ans(T, 0);
    for (i = 0; i < T; i++) {
        cin >> N;
        for (j = 0; j < N; j++) {
            cin >> x;
            if (x % 2 != 0) ans[i]++;
        }
    }

    for (auto a : ans) cout << a << endl;
    return 0;
}

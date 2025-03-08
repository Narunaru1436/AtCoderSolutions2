#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> S(3);
    for (auto& s : S) cin >> s;

    string T;
    cin >> T;

    string ans = "";
    int i, n;
    for (i = 0; i < T.length(); i++) {
        n = T[i] - '0';
        ans += S[n - 1];
    }

    cout << ans << endl;
    return 0;
}

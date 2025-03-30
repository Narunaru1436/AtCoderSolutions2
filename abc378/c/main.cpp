#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> A(n);
    map<int, int> mp;
    int i;
    for (i = 0; i < n; i++) {
        cin >> A[i];
        mp[A[i]] = -1;
    }

    vector<int> ans(n);
    int x;
    for (i = 0; i < n; i++) {
        x = A[i];
        ans[i] = mp[x];
        mp[x] = i + 1;
    }

    for (auto p : ans) cout << p << ' ';
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> A(n);
    vector<int> B(n - 1);
    for (auto& a : A) cin >> a;
    for (auto& b : B) cin >> b;

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    auto judge = [&](int x) {
        auto nb = B;
        nb.push_back(x);
        sort(nb.begin(), nb.end());
        for (int i = 0; i < n; i++) if (A[i] > nb[i]) return false;
        return true;
    };

    const int INF = 1e9;
    int right = INF;
    int left = 0;
    while (right - left > 1) {
        int mid = (left + right) / 2;
        if (judge(mid)) right = mid;
        else left = mid;
    }

    if (right == INF) cout << -1 << endl;
    else cout << left << endl;
    return 0;
}

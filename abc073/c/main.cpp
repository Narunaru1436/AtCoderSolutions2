#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    map<long long, int> mp;
    long long x;
    int i;
    for (i = 0; i < N; i++) {
        cin >> x;
        mp[x]++;
    }

    int ans = 0;
    for (auto y : mp) {
        if (y.second % 2 == 1) ans++;
    }

    cout << ans << endl;
    return 0;
}

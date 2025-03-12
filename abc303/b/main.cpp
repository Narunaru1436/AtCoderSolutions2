#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    map<int, set<int>> mp;
    int prex, x;
    int i, j;
    for (i = 0; i < M; i++) {
        cin >> prex;
        for (j = 0; j < N - 1; j++) {
            cin >> x;
            mp[prex].insert(x);
            mp[x].insert(prex);
            prex = x;
        }
    }

    int ans = 0;
    for (i = 1; i <= N; i++) {
        for (j = 1; j <= N; j++) {
            if (i != j && mp[i].count(j) == 0) ans++;
        }
    }

    cout << ans / 2 << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    // 重要→mapの初期化方法
    map<int, vector<bool>> mp;
    for (int i = 0; i < N; ++i) {
        mp[i] = vector<bool>(N, false);
    }

    int i, j;
    int k, x, y;
    for (i = 0; i < M; i++) {
        cin >> k;
        for (j = 0; j < k; j++) {
            if (j == 0) cin >> x;
            else {
                cin >> y;
                mp[x - 1][y - 1] = true;
                mp[y - 1][x - 1] = true;
            }
        }
    }

    string ans = "Yes";
    for (i = 0; i < N; i++) {
        if (count(mp[i].begin(), mp[i].end(), false) >= 1) {
            ans = "No";
            break;
        }
    }

    cout << ans << endl;
    return 0;
}

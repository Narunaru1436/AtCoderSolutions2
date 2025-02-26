#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, D;
    cin >> N >> D;

    vector<string> S(N);
    for (auto& s : S) cin >> s;

    int i, j;
    int ans = 0;
    int cur = 0;
    bool can;
    for (j = 0; j < D; j++) {
        // 全員のi日目が'o'かどうか調べる
        can = true;
        for (i = 0; i < N; i++) {
            can = can && (S[i][j] == 'o');
        }

        if (can) {
            cur++; // j日目は全員暇
        }
        else {
            cur = 0; // 誰かひとり忙しい
        }

        ans = max(ans, cur); // 他の連続して暇な日数と比較
    }

    cout << ans << endl;
    return 0;
}

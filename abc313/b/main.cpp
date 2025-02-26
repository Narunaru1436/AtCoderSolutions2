#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    // 自分より強い人数を管理する配列をつくる
    vector<int> S(N + 1); // S[i] = 0なら自分より強い人数がいない
    int i;
    int a, b;
    for (i = 0; i < M; i++) {
        cin >> a >> b;
        S[b]++;
    }

    int ans = -1;
    for (i = 1; i <= N; i++) {
        if (S[i] == 0) {
            if (ans != -1) { // 複数いる場合
                ans = -1;
                break;
            }
            else {
                ans = i;
            }
        }
    }

    cout << ans << endl;
    return 0;
}

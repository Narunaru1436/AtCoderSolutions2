#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> S(N);
    int max_length = 0;
    int i, j;
    for (i = 0; i < N; i++) {
        cin >> S[i];
        max_length = max(max_length, (int)S[i].length());
    }

    vector<string> ans(max_length, string(N, '*'));
    
    int len;
    for (i = 0; i < N; i++) {
        len = S[i].length();
        for (j = 0; j < len; j++) {
            ans[j][N - 1 - i] = S[i][j];
        }
    }

    for (i = 0; i < max_length; i++) {
        // 重要→.find_last_not_of('*')は*ではない最後の位置を返す
        // ex) hello***ならインデックス4を返す
        ans[i].erase(ans[i].find_last_not_of('*') + 1);

        cout << ans[i] << endl;
    }
    
    return 0;
}

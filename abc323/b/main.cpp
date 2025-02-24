#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> win(N);
    int i;
    string s;
    for (i = 0; i < N; i++) {
        cin >> s;
        // 文字列sに含まれる'o'の数をカウント
        win[i] = { count(s.begin(), s.end(), 'o'), i }; // ここスマート
    }

    // 独自のソート関数
    auto cmp = [](pair<int, int> a, pair<int, int> b) {
        if (a.first != b.first) return a.first > b.first;
        return a.second < b.second;
    };

    sort(win.begin(), win.end(), cmp);
    vector<int> ans(N);
    for (i = 0; i < N; i++) ans[i] = win[i].second + 1;
    for (i = 0; i < N; i++) cout << ans[i] << " \n"[i == N - 1];
    
    return 0;
}

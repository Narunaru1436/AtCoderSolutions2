#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> H(N);
    for (int i = 0; i < N; i++) {
        cin >> H[i];
    }

    // 高さごとにインデックスを保存
    unordered_map<int, vector<int>> pos;
    for (int i = 0; i < N; i++) {
        pos[H[i]].push_back(i);
    }

    int maxLen = 1;

    // 各高さごとに等差数列を探索
    for (const pair<const int, vector<int>>& p : pos) {
        const vector<int>& indices = p.second;
        int M = indices.size();
        if (M == 1) continue; // 1個しかない場合は等差数列にならないのでスキップ

        // dp[i][d] : i 番目の要素を終点とし、間隔 d の等差数列の最大長
        unordered_map<int, int> dp;

        for (int i = 0; i < M; i++) {
            for (int j = i + 1; j < M; j++) {
                int d = indices[j] - indices[i]; // 間隔 d
                dp[indices[j] * 3000 + d] = dp[indices[i] * 3000 + d] + 1;
                maxLen = max(maxLen, dp[indices[j] * 3000 + d] + 1);
            }
        }
    }

    cout << maxLen << endl;
    return 0;
}

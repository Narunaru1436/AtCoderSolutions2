#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> X(N, vector<int>(N));
    vector<int> A;

    int k;
    int i, j, l;
    for (i = 0; i < M; i++) {
        cin >> k;
        A.resize(k);
        for (auto& a : A) cin >> a, a--; // 重要→インデックス考慮の格納

        for (j = 0; j < k - 1; j++) {
            for (l = j + 1; l < k; l++) {
                X[A[j]][A[l]] = true;
            }
        }
    }

    bool ans = true;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            ans &= X[i][j];
        }
    }

    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}

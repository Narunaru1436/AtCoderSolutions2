#include <bits/stdc++.h>
#include "unordered_set"
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> P(N);
    vector<set<int>> F(N);
    int C, f;
    int i, j, k;
    for (i = 0; i < N; i++) {
        cin >> P[i] >> C;
        for (j = 0; j < C; j++) {
            cin >> f;
            F[i].insert(f);
        }
    }

    bool all_included = true;
    bool has_extra_feature = false;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (i == j)
                continue;

            if (P[i] < P[j])
                continue;

            all_included = true;
            for (int fx : F[i]) { // 重要→配列の要素ループ。インデックスが重要じゃないならこっちを使う
                if (F[j].count(fx) == 0) {
                    all_included = false;
                    break;
                }
            }
            if (!all_included)
                continue;

            for (int fx : F[j]) {
                if (F[i].count(fx) == 0) { // 重要→setの要素探索
                    has_extra_feature = true;
                }
            }

            if (P[i] > P[j] || has_extra_feature) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}

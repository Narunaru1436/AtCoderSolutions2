#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<long long> A(N);
    vector<long long> B(M);

    for (auto& a : A) cin >> a;
    for (auto& b : B) cin >> b;

    // 黒ボールの中から正のものだけを選ぶ
    // ↑の黒数以下で白ボールを大きいほうから選ぶ

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());

    int i, j;
    long long ans = 0;
    long long cur;
    for (i = 0; i < N; i++) {
        cur = accumulate(A.begin(), A.begin() + i, 0);
        if (cur == 0)
            continue;
        ans = max(ans, cur);
        
        for (j = 0; j < i; j++) {
            cur += B[j];
            ans = max(ans, cur);
        }
    }

    cout << ans << endl;
    return 0;
}

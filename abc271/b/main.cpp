#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int N, Q;
    cin >> N >> Q;

    vector<vector<int>> A(N);
    int L;
    int i, j;
    for (i = 0; i < N; i++) {
        cin >> L;
        A[i].resize(L);
        for (j = 0; j < L; j++) {
            cin >> A[i][j];
        }
    }

    int s, t;
    vector<int> ans(Q);
    for (i = 0; i < Q; i++) {
        cin >> s >> t;
        ans[i] = A[s - 1][t - 1];
    }

    for (auto x : ans) cout << x << endl;
    return 0;
}

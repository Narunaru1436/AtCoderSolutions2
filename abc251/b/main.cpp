#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, W;
    cin >> N >> W;

    vector<int> A(N);
    for (auto& a : A) cin >> a;

    set<int> ans;
    int i, j, k;
    for (i = 0; i < N; i++) {
        if (A[i] > W) continue;
        ans.insert(A[i]);
        for (j = i + 1; j < N; j++) {
            if (A[i] + A[j] > W) continue;
            ans.insert(A[i] + A[j]);
            for (k = j + 1; k < N; k++) {
                if (A[i] + A[j] + A[k] > W) continue;
                ans.insert(A[i] + A[j] + A[k]);
            }
        }
    }

    cout << ans.size() << endl;
    return 0;
}

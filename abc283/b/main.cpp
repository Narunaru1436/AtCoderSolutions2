#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N;

    vector<long long> A(N + 1);
    int i;
    for (i = 1; i <= N; i++) cin >> A[i];

    cin >> Q;

    vector<int> ans;
    int n;
    long long k, x;
    for (i = 0; i < Q; i++) {
        cin >> n;
        if (n == 1) {
            cin >> k >> x;
            A[k] = x;
        }
        else {
            cin >> k;
            ans.push_back(A[k]);
        }
    }

    for (auto s : ans) cout << s << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    long long T;
    cin >> N >> M >> T;

    vector<long long> A(N);
    vector<long long> Y(M + 1, 0);
    int i;
    for (i = 1; i < N; i++) cin >> A[i];

    long long x, y;
    for (i = 0; i < M; i++) {
        cin >> x >> y;
        Y[x] = y;
    }

    string ans = "Yes";
    for (i = 1; i < N; i++) {
        if (T <= A[i]) {
            ans = "No";
            break;
        }
        T -= A[i];
        T += Y[i + 1];
    }

    cout << ans << endl;
    return 0;
}

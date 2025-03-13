#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    long long T;
    cin >> N >> M >> T;

    vector<long long> A(N - 1);
    vector<long long> Y(N, 0); // 該当なしならボーナス０として配列を用意すればいい

    int i;
    for (i = 0; i < N - 1; i++) cin >> A[i];

    long long x, y;
    for (i = 0; i < M; i++) {
        cin >> x >> y;
        Y[x - 1] = y;
    }

    for (i = 1; i < N; i++) {
        T -= A[i - 1];
        if (T <= 0) {
            cout << "No" << endl;
            return 0;
        }
        T += Y[i];
    }

    cout << "Yes" << endl;
    return 0;
}

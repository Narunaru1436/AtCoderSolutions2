#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> A(N);
    int i, j;
    for (i = 0; i < N; i++) cin >> A[i];

    long long S, T;
    for (i = 0; i < N - 1; i++) {
        cin >> S >> T;

        //while (A[i] >= S) {
        //    A[i] -= S;
        //    A[i + 1] += T;
        //}
        
        // 国iに対して交換できる回数はAi / Siと一発で求められる
        // ↑だと計算量が大きくなる

        // (Ai / Si) * Tiを次の国i+1に加算していく
        A[i + 1] += (A[i] / S) * T;
    }

    cout << A[N - 1] << endl;
}

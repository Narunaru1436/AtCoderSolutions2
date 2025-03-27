#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    vector<int> B(M);

    for (auto& a : A) cin >> a;
    for (auto& b : B) cin >> b;

    int i;
    for (i = 1; i < N; i++) {
        A[i] = min(A[i], A[i - 1]);
    }

    for (i = 0; i < M; i++) {
        int pos = lower_bound(A.begin(), A.end(), B[i], greater<int>()) - A.begin();
        if (pos == N) cout << -1 << endl;
        else cout << pos + 1 << endl;
    }

    return 0;
}

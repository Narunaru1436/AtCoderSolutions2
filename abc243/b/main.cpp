#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> A(N);
    vector<long long> B(N);

    int i, j;
    for (i = 0; i < N; i++) cin >> A[i];
    for (i = 0; i < N; i++) cin >> B[i];

    int ans1 = 0;
    int ans2 = 0;
    for (i = 0; i < N; i++) {
        if (A[i] == B[i]) ans1++;
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (A[i] == B[j] && i != j) ans2++;
        }
    }

    cout << ans1 << endl;
    cout << ans2 << endl;
    return 0;
}

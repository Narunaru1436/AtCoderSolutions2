#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    int i, j;
    for (i = 0; i < N; i++) cin >> A[i];

    int S, T;
    for (i = 0; i < N - 1; i++) {
        cin >> S >> T;

        while (A[i] >= S) {
            A[i] -= S;
            A[i + 1] += T;
        }
    }

    cout << A[N - 1] << endl;
}

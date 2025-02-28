#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N + 1);
    vector<bool> X(N + 1, false);

    int i;
    for (i = 1; i <= N; i++) cin >> A[i];

    for (i = 1; i <= N; i++) {
        if (!X[i]) {
            X[A[i]] = true;
        }
    }

    int Count = count(X.begin(), X.end(), false) - 1; // N + 1を考慮
    cout << Count << endl;
    for (i = 1; i <= N; i++) {
        if (!X[i]) cout << i << " ";
    }

    return 0;
}

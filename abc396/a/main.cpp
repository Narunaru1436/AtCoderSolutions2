#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (auto& a : A) cin >> a;

    bool ans = false;
    int i;
    for (i = 0; i < N - 2; i++) {
        if (A[i] == A[i + 1] && A[i + 1] == A[i + 2]) {
            ans = true;
            break;
        }
    }

    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}

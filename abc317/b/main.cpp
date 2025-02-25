#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (auto& x : A) cin >> x;

    sort(A.begin(), A.end());

    int i;
    int Cur = A[0];
    for (i = 0; i < N; i++) {
        if (A[i] != Cur) {
            cout << Cur << endl;
            break;
        }

        Cur++;
    }
    
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K, Q;
    cin >> N >> K >> Q;

    vector<int> A(K);
    vector<int> L(Q);
    for (auto &a : A) cin >> a;
    for (auto &l : L) cin >> l;
    
    int i;
    int l;
    for (i = 0; i < Q; i++) {
        l = L[i] - 1; // lインデックス番目
        if (A[l] == N)
            continue;

        if (find(A.begin(), A.end(), A[l] + 1) != A.end())
            continue;

        A[l] = A[l] + 1;

    }

    for (auto &a : A) cout << a << ' ';
    return 0;
}

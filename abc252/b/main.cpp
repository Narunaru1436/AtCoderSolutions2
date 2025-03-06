#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> A(N);
    vector<int> B(K);

    int i;
    for (i = 0; i < N; i++) cin >> A[i];
    for (i = 0; i < K; i++) cin >> B[i];

    int MaxVal = *max_element(A.begin(), A.end());
    bool ans = any_of(B.begin(), B.end(), [&](int b) { return A[b - 1] == MaxVal; });
    
    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    vector<int> B(M);
    vector<int> C(M + N);

    int i;
    for (i = 0; i < N; i++) cin >> A[i];
    for (i = 0; i < M; i++) cin >> B[i];

    for (i = 0; i < N; i++) C[i] = A[i];
    for (i = N; i < N + M; i++) C[i] = B[i - N];

    sort(C.begin(), C.end()); // 昇順ソート

    string Answer = "No";
    int nLeft;
    int nRight;
    for (i = 0; i < N + M; i++) {
        if (i == N + M - 1)
            break;

        nLeft = C[i];
        nRight = C[i + 1];

        if (find(A.begin(), A.end(), nLeft) != A.end() && find(A.begin(), A.end(), nRight) != A.end()) {
            Answer = "Yes";
            break;
        }
    }

    cout << Answer << endl;
}

// 解答例
int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N), B(M);
    for (auto& x : A) cin >> x;
    for (auto& x : B) cin >> x;

    auto C = A;
    for (auto x : B) C.push_back(x);
    sort(C.begin(), C.end());

    set<int> st(A.begin(), A.end());

    for (int i = 0; i < N + M - 1; ++i) {
        if (st.contains(C[i]) && st.contains(C[i + 1])) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}

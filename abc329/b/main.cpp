#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);

    // Aに全部入れて最大値求める標準の関数使ったほうが早い気がする
    int MaxValue;
    int i;
    for (i = 0; i < N; i++) {
        cin >> A[i];
        if (i == 0) {
            MaxValue = A[i];
        }
        else if (A[i] >= MaxValue) {
            MaxValue = A[i];
        }
    }

    // vectorから特定の要素を削除
    A.erase(remove(A.begin(), A.end(), MaxValue), A.end());

    for (i = 0; i < A.size(); i++) {
        if (i == 0) {
            MaxValue = A[i];
        }
        else if (A[i] >= MaxValue) {
            MaxValue = A[i];
        }
    }

    cout << MaxValue << endl;
    return 0;
}

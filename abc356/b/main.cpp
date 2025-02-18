#include <bits/stdc++.h>
using namespace std;

int main() {

    int N, M;
    cin >> N >> M;

    vector<int> A(M);
    vector<vector<int>> X(N, vector<int>(M, 0));
    int i, j;

    for (i = 0; i < M; i++) cin >> A[i];

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            cin >> X[i][j];
        }
    }
    
    int nTotal;
    string Answer = "Yes";
    for (i = 0; i < M; i++) {
        nTotal = 0;
        for (j = 0; j < N; j++) {
            nTotal += X[j][i];
        }

        if (nTotal < A[i]) {
            Answer = "No";
            break;
        }

    }

    cout << Answer << endl;
}

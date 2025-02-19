#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> A(N, vector<int>(N, 0));
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (A[i][j] == 1) cout << j + 1 << " ";
        }
        cout << endl;
    }
    
    return 0;
}

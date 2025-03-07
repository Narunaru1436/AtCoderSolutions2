#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    vector<vector<long long>> A(H, vector<long long>(W));
    vector<vector<long long>> B(W, vector<long long>(H));
    int i, j;
    for (i = 0; i < H; i++) {
        for (j = 0; j < W; j++) {
            cin >> A[i][j];
        }
    }

    for (i = 0; i < W; i++) {
        for (j = 0; j < H; j++) {
            B[i][j] = A[j][i];
        }
    }

    for (i = 0; i < W; i++) {
        for (j = 0; j < H; j++) {
            cout << B[i][j] << ' ';
        }
        cout << endl;
    }
    
    return 0;
}

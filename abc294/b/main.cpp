#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    vector<vector<int>> A(H, vector<int>(W));
    int i, j;;
    for (i = 0; i < H; i++) {
        for (j = 0; j < W; j++) {
            cin >> A[i][j];
        }
    }
    
    for (i = 0; i < H; i++) {
        for (j = 0; j < W; j++) {
            if (A[i][j] == 0) cout << '.';
            else cout << char(A[i][j] + 64);
        }

        cout << endl;
    }

    return 0;
}

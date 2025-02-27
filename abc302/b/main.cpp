#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    vector<vector<char>> S(H, vector<char>(W));

    int i, j;
    for (i = 0; i < H; i++) {
        for (j = 0; j < W; j++) {
            cin >> S[i][j];
        }
    }

    for (i = 0; i < H; i++) {
        for (j = 0; j < W; j++) {

            // snukeの場合
            if (S[i][j] == 's') {
                // 横
                if (j + 4 < W) {
                    if (S[i][j + 1] == 'n' && S[i][j + 2] == 'u' && S[i][j + 3] == 'k' && S[i][j + 4] == 'e') {
                        cout << i + 1 << " " << j + 1 << endl;
                        cout << i + 1 << " " << j + 2 << endl;
                        cout << i + 1 << " " << j + 3 << endl;
                        cout << i + 1 << " " << j + 4 << endl;
                        cout << i + 1 << " " << j + 5 << endl;
                    }
                }
                // 縦
                if (i + 4 < H) {
                    if (S[i + 1][j] == 'n' && S[i + 2][j] == 'u' && S[i + 3][j] == 'k' && S[i + 4][j] == 'e') {
                        cout << i + 1 << " " << j + 1 << endl;
                        cout << i + 2 << " " << j + 1 << endl;
                        cout << i + 3 << " " << j + 1 << endl;
                        cout << i + 4 << " " << j + 1 << endl;
                        cout << i + 5 << " " << j + 1 << endl;
                    }
                }
                // 斜め
                if (j + 4 < W && i + 4 < H) {
                    if (S[i + 1][j + 1] == 'n' && S[i + 2][j + 2] == 'u' && S[i + 3][j + 3] == 'k' && S[i + 4][j + 4] == 'e') {
                        cout << i + 1 << " " << j + 1 << endl;
                        cout << i + 2 << " " << j + 2 << endl;
                        cout << i + 3 << " " << j + 3 << endl;
                        cout << i + 4 << " " << j + 4 << endl;
                        cout << i + 5 << " " << j + 5 << endl;
                    }

                }
            }

            // ekunsの場合
            if (S[i][j] == 'e') {
                // 横
                if (j + 4 < W) {
                    if (S[i][j + 1] == 'k' && S[i][j + 2] == 'u' && S[i][j + 3] == 'n' && S[i][j + 4] == 's') {
                        cout << i + 1 << " " << j + 5 << endl;
                        cout << i + 1 << " " << j + 4 << endl;
                        cout << i + 1 << " " << j + 3 << endl;
                        cout << i + 1 << " " << j + 2 << endl;
                        cout << i + 1 << " " << j + 1 << endl;
                    }
                }
                // 縦
                if (i + 4 < H) {
                    if (S[i + 1][j] == 'k' && S[i + 2][j] == 'u' && S[i + 3][j] == 'n' && S[i + 4][j] == 's') {
                        cout << i + 5 << " " << j + 1 << endl;
                        cout << i + 4 << " " << j + 1 << endl;
                        cout << i + 3 << " " << j + 1 << endl;
                        cout << i + 2 << " " << j + 1 << endl;
                        cout << i + 1 << " " << j + 1 << endl;
                    }
                }
                // 斜め
                if (j + 4 < W && i + 4 < H) {
                    if (S[i + 1][j + 1] == 'k' && S[i + 2][j + 2] == 'u' && S[i + 3][j + 3] == 'n' && S[i + 4][j + 4] == 's') {
                        cout << i + 5 << " " << j + 5 << endl;
                        cout << i + 4 << " " << j + 4 << endl;
                        cout << i + 3 << " " << j + 3 << endl;
                        cout << i + 2 << " " << j + 2 << endl;
                        cout << i + 1 << " " << j + 1 << endl;
                    }

                }
            }
        }
    }
    
    return 0;
}

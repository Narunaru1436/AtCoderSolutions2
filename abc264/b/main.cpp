#include <bits/stdc++.h>
using namespace std;

int main() {
    int R, C;
    cin >> R >> C;

    int N = 15;
    vector<vector<bool>> G(N + 1, vector<bool>(N + 1, false));
    int RowMax = 1;
    int RowMin = N;
    int ColMax = N;
    int ColMin = 1;

    int Clr = 1; // 外枠の色 1:黒 2:白
    int i, j;
    while ((RowMax != RowMin) || (ColMax != ColMin)) {
        Clr %= 2;

        // 外枠と枠の中身を塗りつぶす
        // 枠の中はいったん枠と逆の色で塗りつぶす
        for (i = RowMax; i <= RowMin; i++) {
            for (j = ColMin; j <= ColMax; j++) {
                // 外枠
                if (i == RowMax || i == RowMin || j == ColMin || j == ColMax) {
                    G[i][j] = Clr;
                }
                // 枠の内側
                else {
                    G[i][j] = !Clr;
                }
            }
        }

        // 枠を狭める
        RowMax++;
        RowMin--;
        ColMax--;
        ColMin++;

        Clr++;
    }

    if (G[R][C]) cout << "black" << endl;
    else cout << "white" << endl;
    return 0;
}

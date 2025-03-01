#include <bits/stdc++.h>
using namespace std;

// グリッドの特定の矩形範囲を塗りつぶす
void DrawGrid(vector<vector<char>> &G, int LTx, int LTy, int RBx, int RBy, char c)
{
    int i, j;
    for (i = LTx; i <= RBx; i++) {
        for (j = LTy; j <= RBy; j++) {
            G[i][j] = c;
        }
    }
}

int main()
{
    int N;
    cin >> N;

    vector<vector<char>> G(N + 1, vector<char>(N + 1));
    int i, j;
    char col;
    for (i = 1; i <= N; i++) {
        j = N + 1 - i;
        if (i > j)
            continue;

        if (i % 2 == 0) col = '.';
        else col = '#';

        DrawGrid(G, i, i, j, j, col);
    }

    for (i = 1; i <= N; i++) {
        for (j = 1; j <= N; j++) {
            cout << G[i][j];
        }
        cout << endl;
    }
}

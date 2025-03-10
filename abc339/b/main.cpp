#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W, N;
    cin >> H >> W >> N;

    int dx[4] = { -1, 0, 1, 0 };
    int dy[4] = { 0, 1, 0, -1 };

    vector<vector<char>> grit(H, vector<char>(W, '.'));

    // 0:↑ 1:→ 2:↓ 3:←
    int dir = 0;
    int x = 0, y = 0;
    int i, j;
    for (i = 0; i < N; i++) {
        if (grit[x][y] == '.') {
            grit[x][y] = '#';
            dir = (dir + 1) % 4;
        }
        else {
            grit[x][y] = '.';
            dir = (dir + 3) % 4;
        }

        x = (x + dx[dir] + H) % H;
        y = (y + dy[dir] + W) % W;
    }

    for (i = 0; i < H; i++) {
        for (j = 0; j < W; j++) {
            cout << grit[i][j];
        }
        cout << "\n";
    }

    return 0;
}

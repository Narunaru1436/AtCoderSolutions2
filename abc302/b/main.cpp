#include <bits/stdc++.h>
using namespace std;

int H, W;
vector<string> S;
string target = "snuke";

// 8方向の移動ベクトル
const int dx[8] = {0, 0, 1, -1, 1, -1, 1, -1};
const int dy[8] = {1, -1, 0, 0, 1, -1, -1, 1};

int main() {
    cin >> H >> W;
    S.resize(H);
    for (int i = 0; i < H; i++) {
        cin >> S[i];
    }

    // 全てのマス (i, j) を探索
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            // snuke の最初の文字 's' であるかチェック
            if (S[i][j] != 's') continue;

            // 8方向に対して探索
            for (int d = 0; d < 8; d++) {
                vector<pair<int, int>> positions;
                bool found = true;

                for (int k = 0; k < 5; k++) {
                    int ni = i + k * dx[d];
                    int nj = j + k * dy[d];

                    // 範囲外チェック
                    if (ni < 0 || ni >= H || nj < 0 || nj >= W) {
                        found = false;
                        break;
                    }

                    // 文字が一致するかチェック
                    if (S[ni][nj] != target[k]) {
                        found = false;
                        break;
                    }

                    // 位置を記録
                    positions.push_back({ni + 1, nj + 1}); // 1-based index
                }

                // snuke が見つかった場合
                if (found) {
                    for (auto [r, c] : positions) {
                        cout << r << " " << c << endl;
                    }
                    return 0; // 答えが一意なので即終了
                }
            }
        }
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

/***********************************************
    @brief マンハッタン距離を計算
************************************************/
double CalcManhattanDistance(double x1, double y1, double x2, double y2)
{
    return abs(x1 - x2) + abs(y1 - y2);
}

int main() {
    int R, C;
    cin >> R >> C;

    vector<string> B(R);
    for (auto& s : B) cin >> s;

    vector<pair<int, int>> Bomb;
    int BPower;
    int i, j, k;
    for (i = 0; i < R; i++) {
        for (j = 0; j < C; j++) {
            BPower = (int)B[i][j] - 48; // 重要→char→intに変換.表示中の文字をintに変換したい場合は-48する
            if (1 <= BPower && BPower <= 9) {
                pair<int, int> XY{i, j};
                Bomb.push_back(XY);
            }
        }
    }

    int Bx, By;
    int dist;
    for (i = 0; i < R; i++) {
        for (j = 0; j < C; j++) {
            if (B[i][j] == '#') {
                for (k = 0; k < Bomb.size(); k++) {
                    Bx = Bomb[k].first;
                    By = Bomb[k].second;
                    BPower = (int)B[Bx][By] - 48;

                    dist = CalcManhattanDistance(i, j, Bx, By);
                    if (BPower >= dist) {
                        B[i][j] = '.';
                        break;
                    }
                }
            }
        }
    }

    for (k = 0; k < Bomb.size(); k++) {
        B[Bomb[k].first][Bomb[k].second] = '.';
    }

    for (i = 0; i < R; i++) {
        for (j = 0; j < C; j++) {
            cout << B[i][j];
        }
        cout << endl;
    }

    return 0;
}

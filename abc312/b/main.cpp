#include <bits/stdc++.h>
using namespace std;

bool SubSolution312(vector<string> S, int i, int j)
{
    // 黒い部分の判定
    int di, dj;
    for (di = 0; di < 3; di++) {
        for (dj = 0; dj < 3; dj++) {
            if (S[i + di][j + dj] != '#' || S[i + 6 + di][j + 6 + dj] != '#')
                return false;
        }
    }

    int checkWhite[14][2] = {
    {0, 3}, {1, 3}, {2, 3}, {3, 0}, {3, 1}, {3, 2}, {3, 3},
    {5, 5}, {5, 6}, {5, 7}, {6, 5}, {7, 5}, {8, 5}, {5, 8}
    };

    // 白い部分の判定
    int k;
    int x1, y1, x2, y2;
    for (k = 0; k < 14; k++) {
        x1 = i + checkWhite[k][0];
        y1 = j + checkWhite[k][1];
        x2 = i + (8 - checkWhite[k][0]);
        y2 = j + (8 - checkWhite[k][1]);
        if (S[x1][y1] != '.' || S[x2][y2] != '.')
            return false;
    }

    return true;
}

int main()
{
    int N, M;
    cin >> N >> M;

    vector<string> S(N);
    int i, j, k;
    for (i = 0; i < N; i++) cin >> S[i];

    // 9x9を左上から下方向に捜査する
    for (i = 0; i <= N - 9; i++) {
        for (j = 0; j <= M - 9; j++) {
            if (SubSolution312(S, i, j)) cout << i + 1 << ' ' << j + 1 << endl;
        }
    }

    return 0;
}

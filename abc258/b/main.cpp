#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> A(N, vector<int>(N, 0));
    int i, j, k;
    char c;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            cin >> c;
            A[i][j] = c - '0';
        }
    }

    // 最大値を見つけてそこをスタート地点とする(最大値は複数の可能性あり)
    vector<pair<int, int>> St;
    int MaxVal = 0;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (i == 0 && j == 0) {
                MaxVal = A[i][j];
                St.push_back({ i, j });
                continue;
            }

            if (A[i][j] > MaxVal) {
                MaxVal = A[i][j];

                St.clear();
                St.push_back({ i, j });
            }
            else if (A[i][j] == MaxVal) {
                St.push_back({ i, j });
            }
        }
    }


    vector<int> dx = { 1, 1, 0, -1, -1, -1, 0, 1 };
    vector<int> dy = { 0, 1, 1, 1, 0, -1, -1, -1 };
    int CurX, CurY;
    long long ans = 0;
    long long num = 0;
    for (i = 0; i < St.size(); i++) {
        CurX = St[i].first;
        CurY = St[i].second;

        for (j = 0; j < 8; j++) {
            num = 0;

            for (k = 0; k < N; k++) {
                num = num * 10 + A[CurX][CurY];
                
                CurX = (CurX + dx[j] + N) % N;
                CurY = (CurY + dy[j] + N) % N;
            }

            ans = max(ans, num);
        }
    }

    cout << ans << endl;
    return 0;
}

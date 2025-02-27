#include <bits/stdc++.h>
using namespace std;

/***********************************************
    @brief 正方形グリッドの特定の要素が一致しているかどうか
************************************************/
bool IsGridMatch2(vector<vector<int>> A, vector<vector<int>> B, int N)
{
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (A[i][j] == 1 && B[i][j] == 0)
                return false;
        }
    }

    return true;
}

// 重要→グリッドマスを時計回りに回転
/***********************************************
    @brief グリッド回転
************************************************/
void RotateGrid(vector<vector<int>> &A, int N)
{
    vector<vector<int>> Temp(N, vector<int>(N));

    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            Temp[j][N - i - 1] = A[i][j]; // インデックス0始まりと仮定
        }
    }

    A = Temp;
}

int main()
{
    int N;
    cin >> N;

    vector<vector<int>> A(N, vector<int>(N));
    vector<vector<int>> B(N, vector<int>(N));
    
    int i, j, k;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }
    
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            cin >> B[i][j];
        }
    }
    
    string ans = "No";
    for (k = 0; k < 4; k++) {
        if (IsGridMatch2(A, B, N)) {
            ans = "Yes";
            break;
        }

        RotateGrid(A, N); // 座標回転
    }

    cout << ans << endl;
    return 0;
}

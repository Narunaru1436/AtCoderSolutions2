#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<char>> A(N, vector<char>(N));

    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }

    string ans = "correct";
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (i == j)
                continue;

            if ((A[i][j] == 'W' && A[j][i] != 'L') || (A[i][j] == 'L' && A[j][i] != 'W') || (A[i][j] == 'D' && A[j][i] != 'D')) {
                ans = "incorrect";
                break;
            }

        }
    }

    cout << ans << endl;
    return 0;
}

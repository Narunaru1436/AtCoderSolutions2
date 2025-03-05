#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<bool>> X(N + 1, vector<bool>(N + 1));
    int u, v;
    int i, j, k;
    for (i = 0; i < M; i++) {
        cin >> u >> v;
        X[u][v] = X[v][u] = true;
    }

    int Count = 0;
    for (i = 1; i <= N; i++) {
        for (j = i + 1; j <= N; j++) {
            for (k = j + 1; k <= N; k++) {
                if (X[i][j] && X[j][k] && X[k][i]) Count++;
            }
        } 
    }

    cout << Count << endl;
    return 0;
}

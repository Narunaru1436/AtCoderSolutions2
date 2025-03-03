#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> A(N + 1);
    
    int x, y;
    int i, j;
    for (i = 0; i < M; i++) {
        cin >> x >> y;
        A[x].push_back(y);
        A[y].push_back(x);
    }

    for (i = 1; i <= N; i++) {
        sort(A[i].begin(), A[i].end());
        cout << A[i].size() << " ";
        for (j = 0; j < A[i].size(); j++) cout << A[i][j] << " ";

        cout << endl;
    }

    return 0;
}

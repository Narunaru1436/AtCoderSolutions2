#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> A(N, vector<int>(37, -1));
    vector<int> C(N);

    int i, j;
    for (i = 0; i < N; i++) {
        cin >> C[i];

        for (j = 0; j < C[i]; j++) {
            cin >> A[i][j];
        }
    }

    int X;
    cin >> X;
    
    vector<int> vec;
    for (i = 0; i < N; i++) {
        for (j = 0; j < C[i]; j++) {
            if (A[i][j] == X) vec.push_back(i + 1);
        }
    }

    int cMin = 37;
    for (auto i : vec) cMin = min(cMin, C[i - 1]);

    vector<int> ans;
    for (auto i : vec) if (C[i - 1] == cMin) ans.push_back(i);

    cout << ans.size() << endl;
    for (auto b : ans) cout << b << " ";
    cout << endl;
    return 0;
}

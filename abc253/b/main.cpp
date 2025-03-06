#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    vector<string> S(H);
    int i, j;
    for (i = 0; i < H; i++) cin >> S[i];

    vector<pair<int, int>> X;
    for (i = 0; i < H; i++) {
        for (j = 0; j < W; j++) {
            if (S[i][j] == 'o') X.push_back({ i, j });
        } 
    }

    cout << abs(X[0].first - X[1].first) + abs(X[0].second - X[1].second) << endl;
    return 0;
}

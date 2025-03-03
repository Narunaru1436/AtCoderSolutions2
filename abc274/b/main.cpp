#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    vector<int> ans(W, 0);
    string S;
    int i, j;
    for (i = 0; i < H; i++) {
        cin >> S;
        for (j = 0; j < W; j++) {
            if (S[j] == '#') ans[j]++;
        }
    }

    for (auto s : ans) cout << s << " ";
    return 0;
}

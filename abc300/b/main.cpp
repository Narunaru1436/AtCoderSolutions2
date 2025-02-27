#include <bits/stdc++.h>
using namespace std;

bool IsGridMatch(vector<string> A, vector<string> B, int s, int t, int H, int W)
{
    int i, j;
    int ni, nj;
    for (i = 0; i < H; i++) {
        for (j = 0; j < W; j++) {
            ni = (s + i) % H;
            nj = (t + j) % W; 
            if (A[ni][nj] != B[i][j]) return false;
        }
    }

    return true;
}

int main()
{
    int H, W;
    cin >> H >> W;

    vector<string> A(H), B(H);
    int i, j;
    for (i = 0; i < H; i++) cin >> A[i];
    for (i = 0; i < H; i++) cin >> B[i];

    int s, t;
    string ans = "No";
    for (s = 0; s < H; s++) {
        for (t = 0; t < W; t++) {
            if (IsGridMatch(A, B, s, t, H, W)) {
                ans = "Yes";
                break;
            }
        }
    }

    cout << ans << endl;
    return 0;
}

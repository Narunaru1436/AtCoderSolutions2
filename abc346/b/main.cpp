#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int W, B;
    cin >> W >> B;

    string S = "wbwbwwbwbwbw";
    string T = S + S;

    bool ans = false;
    int wCnt = 0;
    int bCnt = 0;
    int i, j;
    for (i = 0; i < 12; i++) {
        wCnt = 0;
        bCnt = 0;
        for (j = 0; j < W + B; j++) {
            if (T[(i + j) % 12] == 'w') wCnt++;
            else bCnt++;
        }

        if (wCnt == W && bCnt == B) {
            ans = true;
            break;
        }
    }

    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}

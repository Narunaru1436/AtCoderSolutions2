#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    string divide[4] = { "dream", "dreamer", "erase", "eraser" };
    
    reverse(S.begin(), S.end());
    for (int i = 0; i < 4; ++i) reverse(divide[i].begin(), divide[i].end());
    
    bool bFlg1 = true;
    bool bFlg2 = false;
    for (int i = 0; i < S.size();) {
        bFlg2 = false;
        for (int j = 0; j < 4; j++) {
            if (S.substr(i, divide[j].size()) == divide[j]) {
                bFlg2 = true;
                i += divide[j].size();
            }
        }
        if (!bFlg2) {
            bFlg1 = false;
            break;
        }
    }

    if (bFlg1) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}

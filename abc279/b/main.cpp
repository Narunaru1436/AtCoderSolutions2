#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;

    int SLen = S.length();
    int TLen = T.length();
    if (TLen > SLen) {
        cout << "No" << endl;
        return 0;
    }

    string ans = "No";
    int i;
    for (i = 0; i <= SLen - TLen; i++) {
        if (S.substr(i, TLen) == T) {
            ans = "Yes";
            break;
        }
    }

    cout << ans << endl;
    return 0;
}

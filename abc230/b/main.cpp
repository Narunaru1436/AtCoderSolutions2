#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    string T = "";
    int i, j;
    for (i = 0; i < 2 * S.length(); i++) {
        if (i % 3 == 0) T += 'o';
        else T += 'x';
    }

    bool ans = false;
    for (i = 0; i <= T.length() - S.length(); i++) {
        if (S == T.substr(i, S.length())) {
            ans = true;
            break;
        }
    }

    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}

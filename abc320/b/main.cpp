#include <bits/stdc++.h>
using namespace std;

bool IsPalindrome(string s)
{
    string sL = "";
    string sR = "";

    size_t len = s.length();

    if (len != 1) {
        sL = s.substr(0, len / 2);
        sR = s.substr((len + 1) / 2);
        reverse(sR.begin(), sR.end());
    }

    return sL == sR;
}

int main() {
    string S;
    cin >> S;

    int i, j;
    string strCur;
    int ans = 1;
    for (i = 0; i < S.length(); i++) {
        for (j = i + 1; j <= S.length(); j++) {
            strCur = S.substr(i, j);
            if (IsPalindrome(strCur)) {
                if (strCur.length() > ans) ans = strCur.length();
            }
        }
    }

    cout << ans << endl;
    return 0;
}

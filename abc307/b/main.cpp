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

int main()
{
    int N;
    cin >> N;

    vector<string> S(N);
    for (auto &s : S) cin >> s;

    string str = "";
    string ans = "No";
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (i == j)
                continue;

            str = S[i] + S[j];
            if (IsPalindrome(str)) {
                ans = "Yes";
                break;
            }

        }
    }

    cout << ans << endl;
    return 0;
}



#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> S(N);
    for (auto& s : S) cin >> s;

    string ans = "Yes";
    int i;
    for (i = 0; i < N; i++) {
        if (S[i][0] != 'H' && S[i][0] != 'D' && S[i][0] != 'C' && S[i][0] != 'S') {
            ans = "No";
            break;
        }

        if (S[i][1] != 'A' && S[i][1] != '1' && S[i][1] != '2' && S[i][1] != '3' && 
            S[i][1] != '4' && S[i][1] != '5' && S[i][1] != '6' && S[i][1] != '7' &&
            S[i][1] != '8' && S[i][1] != '9' && S[i][1] != 'T' && S[i][1] != 'J' &&
            S[i][1] != 'Q' && S[i][1] != 'K') 
        {
            ans = "No";
            break;
        }

        if (count(S.begin(), S.end(), S[i]) >= 2) {
            ans = "No";
        }

    }

    cout << ans << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    bool LowerFlg = false;
    bool UpperFlg = false;
    unordered_map<char, int> freq;
    bool ans = false;

    int i;
    for (i = 0; i < S.length(); i++) {
        if (islower(S[i])) LowerFlg = true;
        else if (isupper(S[i])) UpperFlg = true;

        freq[S[i]]++;
    }

    ans = LowerFlg && UpperFlg;

    for (i = 0; i < freq.size(); i++) {
        if (freq[i] >= 2) {
            ans = false;
            break;
        }
    }

    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    int nUpperCount = 0;
    int nLowerCount = 0;

    int i;
    for (i = 0; i < S.length(); i++) {
        if (isupper(S[i])) nUpperCount++;
        else nLowerCount++;
    }


    string Result = "";
    if (nUpperCount > nLowerCount) {
        for (i = 0; i < S.length(); i++) Result += toupper(S[i]);
    }
    else {
        for (i = 0; i < S.length(); i++) Result += tolower(S[i]);
    }

    cout << Result << endl;
    return 0;
}

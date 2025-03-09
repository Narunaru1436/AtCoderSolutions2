#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    int table[26] = {};
    int n;
    int i;
    for (i = 0; i < S.length() - 1; i++) {
        if ((i % 2 == 0) && S[i] != S[i + 1]) {
            cout << "No" << endl;
            return 0;
        }
        n = S[i] - 'a';
        table[n]++;
    }

    n = S[i] - 'a';
    table[n]++;
    for (i = 0; i < 26; i++) {
        if (table[i] != 0 && table[i] != 2) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}

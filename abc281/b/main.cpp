#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    if (S.length() != 8) {
        cout << "No" << endl;
        return 0;
    }

    int st = (int)S[0];
    int end = (int)S[S.length() - 1];
    if ((65 > st || st > 90) || (65 > end || end > 90)) {
        cout << "No" << endl;
        return 0;
    }

    int num = stoi(S.substr(1, S.length() - 2));
    if (100000 > num || num > 999999) {
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    int nMax = S.size();
    int i = 0;

    // A
    while (i < nMax && S[i] == 'A') i++;
    // B
    while (i < nMax && S[i] == 'B') i++;
    // C
    while (i < nMax && S[i] == 'C') i++;

    if (i == nMax) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}

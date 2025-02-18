#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S, T;
    cin >> S >> T;

    int i, j;
    int nIndex = 0;
    for (i = 0; i < S.length(); i++) {
        for (j = nIndex; j < T.length(); j++) {
            if (S[i] == T[j]) {
                nIndex = j + 1;
                cout << nIndex<< " ";
                break;
            }
        }
    }
}
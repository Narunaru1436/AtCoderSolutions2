#include <bits/stdc++.h>
using namespace std;

int main() {
    int N = 10;
    vector<string> S(N);

    int i, j;
    for (i = 0; i < N; i++) {
        cin >> S[i];
    }

    int A = -1;
    int B = -1;
    int C = -1;
    int D = -1;
    for (i = 0; i < N; i++) {
        if (A >= 0) {
            if (S[i][j] == '#') {
                B = i;
                continue;
            }
            else break;
        }

        for (j = 0; j < N; j++) {
            if (S[i][j] == '#') {
                A = i;
                B = i;
                break;
            }
        }
    }

    for (i = 0; i < N; i++) {
        if (S[A][i] == '#') {
            if (C >= 0) D = i;
            else {
                C = i;
                D = i;
            }
        }
    }

    cout << A + 1 << " " << B + 1 << endl;
    cout << C + 1 << " " << D + 1 << endl;
    return 0;
}

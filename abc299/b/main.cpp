#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, T;
    cin >> N >> T;

    vector<int> C(N);
    vector<int> R(N);

    int i;
    int nFlg;
    for (i = 0; i < N; i++) {
        cin >> C[i];
        if (i == 0) {
            nFlg = C[0];
        }

        if (C[i] == T) {
            nFlg = T;
        }
    }

    for (i = 0; i < N; i++) {
        cin >> R[i];
    }


    int nMaxIndex = 0;
    int nMaxValue = -1;
    for (i = 0; i < N; i++) {
        if (C[i] == nFlg) {
            if (R[i] >= nMaxValue) {
                nMaxIndex = i;
                nMaxValue = R[i];
            }
        }
    }

    cout << nMaxIndex + 1 << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int M;
    cin >> M;

    vector<int> D(M + 1);
    int i, j;
    int Length = 0;
    for (i = 1; i <= M; i++) {
        cin >> D[i];
        Length += D[i];
    }

    int MidIndex = Length / 2;
    int CurIndex = 0;
    for (i = 1; i <= M; i++) {
        for (j = 1; j <= D[i]; j++) {
            if (CurIndex == MidIndex) {
                cout << i << " " << j << endl;
                return 0;
            }

            CurIndex++;
        }
    }

    // 別解
    /*
    for (i = 1; i <= M; i++) {
        MidIndex -= D[i];
        if (MidIndex <= 0) {
            cout << i << " " << D[i] - abs(MidIndex) << endl;
            return 0;
        }
    }
    */

    return 0;
}

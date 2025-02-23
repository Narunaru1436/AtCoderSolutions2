#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> W(N);
    vector<int> X(N);

    int i, j;
    for (i = 0; i < N; i++) cin >> W[i] >> X[i];

    int MaxCount;
    int CurCount;
    int St, End;
    for (i = 0; i <= 24; i++) {
        CurCount = 0;
        for (j = 0; j < N; j++) {
            St = ((X[j] + i) % 24);
            End = ((X[j] + i + 1) % 24);
            if (St > End) swap(St, End);

            if (9 <= St && End <= 18) {
                CurCount += W[j];
            }
            if (i == 0) {
                MaxCount = CurCount;
            }
            else if (CurCount >= MaxCount) {
                MaxCount = CurCount;
            }
        }
    }

    cout << MaxCount << endl;
    return 0;
}

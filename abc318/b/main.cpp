#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int A, B, C, D;

    bool g[100][100] = {};

    int i, j, k;
    for (i = 0; i < N; i++) {
        cin >> A >> B >> C >> D;

        for (j = A; j < B; j++) {
            for (k = C; k < D; k++) {
                g[j][k] = true;
            }
        }
    }

    int Count = 0;
    for (i = 0; i < 100; i++) {
        for (j = 0; j < 100; j++) {
            if (g[i][j]) Count++;
        }
    }

    cout << Count << endl;
    return 0;
}

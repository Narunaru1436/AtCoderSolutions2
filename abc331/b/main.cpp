#include <bits/stdc++.h>
using namespace std;

int main() {
    // 6個入りS円
    // 8個入りM円
    // 12個入りL円

    int N, S, M, L;
    cin >> N >> S >> M >> L;

    // Nの上限が100個なのでS,M,LについてMax100としたトリプルループを回す
    int i, j, k;
    int Answer = 100 * 100 * 100;
    for (i = 0; i < 100; i++) {
        for (j = 0; j < 100; j++) {
            for (k = 0; k < 100; k++) {
                if (i * 6 + j * 8 + k * 12 >= N) {
                    Answer = min(i * S + j * M + k * L, Answer);
                }
            }
        }
    }

    cout << Answer << endl;
    return 0;
}

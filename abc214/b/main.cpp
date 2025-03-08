#include <bits/stdc++.h>
using namespace std;

int main() {
    int S, T;
    cin >> S >> T;

    int ans = 0;
    int i, j, k;
    for (i = 0; i <= S; i++) {
        for (j = 0; i + j <= S; j++) {
            for (k = 0; i + j + k <= S; k++) {
                if (i * j * k > T) continue;
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}

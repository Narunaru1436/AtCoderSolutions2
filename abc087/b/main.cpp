#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C, X;
    cin >> A >> B >> C >> X;

    int ans = 0;
    int a, b, c;
    int Total;
    for (a = 0; a <= A; a++) {
        for (b = 0; b <= B; b++) {
            for (c = 0; c <= C; c++) {
                Total = a * 500 + b * 100 + c * 50;
                if (Total == X) ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long X;
    int K;
    cin >> X >> K;

    long long factor = 1;  // 10^i を管理

    for (int i = 0; i < K; i++) {
        long long remainder = X % (factor * 10);
        if (remainder >= 5 * factor) {
            X += (10 * factor - remainder);  // 切り上げ
        } else {
            X -= remainder;  // 切り捨て
        }
        factor *= 10;
    }

    cout << X << endl;
    return 0;
}

#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {

    // 3点を結ぶ図形が直角三角形かどうかを三平方の定理で判別する
    int x[3];
    int y[3];
    int i;
    for (i = 0; i < 3; i++) {
        cin >> x[i] >> y[i];
    }

    // 3辺の長さを計算
    double A, B, C;
    A = pow(x[1] - x[0], 2) + pow(y[1] - y[0], 2);
    B = pow(x[2] - x[1], 2) + pow(y[2] - y[1], 2);
    C = pow(x[0] - x[2], 2) + pow(y[0] - y[2], 2);

    // 3辺のうち最長のものを斜辺とする
    double maxLen = max({A, B, C}); // 斜辺
    double TwoLen = A + B + C - maxLen; // 残る2辺の合計

    if (TwoLen == maxLen) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}


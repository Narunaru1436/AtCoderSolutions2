#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b, d;
    cin >> a >> b >> d;

    // 半径r(原点から点a,bまでの距離)を求める
    double r = hypot(a, b); // √(a^2 + b^2)
    // a, bの角度θを求める
    double theta = atan2(b, a);

    theta += d * acos(-1.0) / 180.0;

    // acos(-1.0) は円周率π の近似値を取得する
    // d* acos(-1.0) / 180.0 は、度数法d を弧度法（ラジアン）に変換
    // theta にその値を足すことで、角度をd 度回転

    double x = cos(theta) * r;
    double y = sin(theta) * r;

    // 小数点以下10桁まで出力
    cout << fixed << setprecision(10) << x << ' ' << y << endl;
    return 0;
}

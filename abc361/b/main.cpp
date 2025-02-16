#include <bits/stdc++.h>
using namespace std;

/***********************
共通部分がある場合true
***********************/
bool SubFunction(int l1, int r1, int l2, int r2)
{
    return not (r1 <= l2 or r2 <= l1); // 共通部分があれば(r1 <= l2 or r2 <= l1)がfalseになる
}

int main() {

    int a, b, c, d, e, f; // 直方体C1
    int g, h, i, j, k, l; // 直方体C2

    cin >> a >> b >> c >> d >> e >> f;
    cin >> g >> h >> i >> j >> k >> l;

    if (SubFunction(a, d, g, j) && SubFunction(b, e, h, k) && SubFunction(c, f, i, l)) {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;

    return 0;

}

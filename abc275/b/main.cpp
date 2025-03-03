#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B, C, D, E, F;
    cin >> A >> B >> C >> D >> E >> F;

    long long devide = 998244353;

    long long x, y, ans;
    x = ((A % devide) * (B % devide)) % devide;
    x = (x * (C % devide)) % devide;
    y = ((D % devide) * (E % devide)) % devide;
    y = (y * (F % devide)) % devide;

    ans = (x - y + devide) % devide;
    cout << ans << endl;
    return 0;
}

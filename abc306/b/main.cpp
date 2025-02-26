#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

int main()
{
    // long long は表現できる最大値が(2の63乗) - 1

    ull ans = 0;
    int i;
    for (i = 0; i < 64; i++) {
        ull a;
        cin >> a;
        ans += a << i;
    }

    cout << ans << endl;
    return 0;
}
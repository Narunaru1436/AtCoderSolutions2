#include <bits/stdc++.h>
using namespace std;

constexpr long long ten(int n) { return n ? 10 * ten(n - 1) : 1; };
int main()
{
    int n;
    cin >> n;
    if (n < 1000) cout << n << '\n';
    for (int i = 1; i <= 6; i++) if (ten(i + 2) <= n && n < ten(i + 3)) cout << n - n % ten(i) << '\n';
    
    return 0;
}

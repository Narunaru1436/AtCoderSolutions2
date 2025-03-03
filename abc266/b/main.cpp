#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;

    const long long y = 998244353;

    long long x = 0;
    while (x < y) {
        if ((N - x) % y == 0) {
            cout << x << endl;
            return 0;
        }

        x++;
    }

    return 0;
}

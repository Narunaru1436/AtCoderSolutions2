#include <bits/stdc++.h>
using namespace std;

int main() {
    long long X, K;
    cin >> X >> K;

    long long m, pow10 = 1;
    long long i;
    for (i = 0; i < K; i++) {
        X /= pow10;
        m = X % 10;
        
        if (m <= 4) X -= m;
        else X += m;

        X *= pow10;
        pow10 *= 10;
    }

    cout << X << endl;
    return 0;
}

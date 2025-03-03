#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y, Z;
    cin >> X >> Y >> Z;

    if (Y < 0) {
        X *= -1;
        Y *= -1;
        Z *= -1;
    }

    if (X < Y) cout << abs(X) << endl;
    else {
        if (Z > Y) cout << -1 << endl;
        else cout << abs(Z) + abs(X - Z) << endl;
    }
        
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long X;
    cin >> X;

    long long Answer;

    // X > 0なら切り上げ.X < 0なら切り捨て
    if (X > 0) Answer = (X + 10 - 1) / 10;
    else Answer = X / 10;

    cout << Answer << endl;
}

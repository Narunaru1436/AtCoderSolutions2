#include <bits/stdc++.h>
using namespace std;

int main() {
    double A, B;
    cin >> A >> B;

    double dist = sqrt(A * A + B * B);
    cout << A / dist << ' ' << B / dist << endl;
    return 0;
}

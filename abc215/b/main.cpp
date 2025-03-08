#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;

    int k = 0;
    long long Cur = 1;
    while (Cur <= N) {
        k++;
        Cur = pow(2, k);
    }

    cout << k - 1 << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long x;
    int Odd = 0;
    int i; 
    for (i = 0; i < N; i++) {
        cin >> x;
        if (x % 2 == 1) Odd++;
    }

    if (Odd % 2 == 1) cout << "NO" << endl;
    else cout << "YES" << endl;
    return 0;
}

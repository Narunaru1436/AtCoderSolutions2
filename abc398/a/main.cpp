#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    string ans = "";
    int i;
    for (i = 0; i < N; i++) ans += '-';

    ans[(N / 2)] = '=';
    if (N % 2 == 0) {
        ans[(N / 2) - 1] = '=';
    }

    cout << ans << endl;
    return 0;
}

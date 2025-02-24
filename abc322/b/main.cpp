#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    string S, T;
    cin >> S >> T;

    bool bLeft = (S == T.substr(0, N));
    bool bRight = (S == T.substr(M - N));
    
    int ans;
    if (bLeft && bRight) ans = 0;
    else if (bLeft && !bRight) ans = 1;
    else if (!bLeft && bRight) ans = 2;
    else ans = 3;

    cout << ans << endl;
    return 0;
}

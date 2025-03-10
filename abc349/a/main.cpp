#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int x;
    int ans = 0;
    int i;
    for (i = 0; i < N - 1; i++) {
        cin >> x;
        ans += x;
    }

    ans *= -1;
    cout << ans << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long ans, H;
    int i;
    for (i = 0; i < N; i++) {
        cin >> H;
        if (i == 0) ans = H;
        else if (ans < H) ans = H;
        else break;
    }

    cout << ans << endl;
    return 0;
}

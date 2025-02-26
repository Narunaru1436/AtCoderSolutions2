#include <bits/stdc++.h>
using namespace std;

int main() {
    int dist[] = { 3, 1, 4, 1, 5, 9 };
    int ans = 0;
    char p, q;
    cin >> p >> q;

    p -= 'A';
    q -= 'A';
    if (p > q) swap(p, q);

    int i;
    for (i = p; i < q; i++) ans += dist[i];
    
    cout << ans << endl;
    return 0;
}

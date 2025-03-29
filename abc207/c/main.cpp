#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int t;
    vector<long long> l(N), r(N); // intでいい
    int i, j;
    for (i = 0; i < N; i++) {
        cin >> t >> l[i] >> r[i];
        
        // すべて閉区間に揃える
        l[i] *= 2;
        r[i] *= 2;
        if (t >= 3) l[i]++;
        if (t == 2 || t == 4) r[i]--;
    }

    int ans = 0;
    for (i = 0; i < N; i++) {
        for (j = i + 1; j < N; j++) {
            if (r[i] < l[j]) continue;
            if (l[i] > r[j]) continue;
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}

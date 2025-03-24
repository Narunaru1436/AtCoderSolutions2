#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    unordered_map<int, int> freq;
    int x;
    int i;
    for (i = 0; i < N; i++) {
        cin >> x;
        freq[x]++;
        freq[x + 1]++;
        freq[x - 1]++;
    }

    int ans = 0;
    for (auto& p : freq) {
        ans = max(ans, p.second);
    }

    cout << ans << endl;
    return 0;
}

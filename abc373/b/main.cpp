#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    map<char, int> mp;
    int i;
    for (i = 0; i < 26; i++) {
        mp[S[i]] = i;
    }
    
    int ans = 0;
    char c1, c2;
    for (i = 0; i < mp.size() - 1; i++) {
        c1 = i + 'A';
        c2 = i + 1 + 'A';
        ans += abs(mp[c2] - mp[c1]);
    }

    cout << ans << endl;
    return 0;
}

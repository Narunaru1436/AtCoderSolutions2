#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, bool> mp;
    mp["ABC"] = false;
    mp["ARC"] = false;
    mp["AGC"] = false;
    mp["AHC"] = false;

    string s;
    int i;
    for (i = 0; i < 3; i++) {
        cin >> s;
        mp[s] = true;
    }

    // 重要→map<string, bool>のループ方法
    for (auto it = mp.begin(); it != mp.end(); it++) {
        if (!it->second) {
            cout << it->first << endl;
            return 0;
        }
    }

    return 0;
}

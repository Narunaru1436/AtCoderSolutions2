#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    vector<pair<int, int>> table;
    int i, Index;
    int cnt;
    for (i = 0; i < n;) {
        if (s[i] == '0') {
            i++;
            continue;
        }

        Index = i;
        cnt = 0;
        while (s[i] == '1') {
            cnt++;
            i++;
        }

        table.push_back({ Index, cnt });
    }

    string rep = s.substr(table[k - 1].first, table[k - 1].second);
    string ans = s;

    ans.erase(table[k - 1].first, table[k - 1].second);
    ans.insert(table[k - 2].first + table[k - 2].second, rep);
    cout << ans << endl;
    return 0;
}

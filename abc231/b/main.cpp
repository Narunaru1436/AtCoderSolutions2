#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    map<string, int> mp;
    string s;
    int i;
    for (i = 0; i < N; i++) {
        cin >> s;
        mp[s]++;
    }

    auto max_itr = max_element(mp.begin(), mp.end(),
        [](const auto& a, const auto& b) {return a.second < b.second;});

    cout << max_itr->first << endl;
    return 0;
}

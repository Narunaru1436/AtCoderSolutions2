#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> p;
    int x;
    int i, j;
    for (i = 0; i < n; i++) {
        cin >> x;
        p.push_back({ x, i });
    }

    sort(p.begin(), p.end());
    reverse(p.begin(), p.end());

    int current_max;
    int r = 1;
    int k;
    set<pair<int, int>> ranking; // i : ランキング
    while (r <= n) {
        current_max = p[r - 1].first;
        k = 0;
        for (j = 0; j < n; j++) {
            if (p[j].first == current_max) {
                ranking.insert({ p[j].second, r });
                k++;
            }
        }

        r+=k;
    }

    for (auto it = ranking.begin(); it != ranking.end(); it++) {
        cout << it->second << endl;
    }
    
    return 0;
}

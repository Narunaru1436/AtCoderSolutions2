#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> P(N);
    vector<int> Q(N);
    int i;
    for (i = 0; i < N; i++) cin >> P[i];
    for (i = 0; i < N; i++) cin >> Q[i];

    set<pair<int, int>> Q2P;
    for (i = 0; i < N; i++) {
        Q2P.insert({ Q[i], P[i] }); // ゼッケンQiの人は人Piを見つめている
    }

    map<int, int> table;
    for (i = 0; i < N; i++) {
        table[i + 1] = Q[i]; // 人iが着ているゼッケン番号
    }

    for (auto it = Q2P.begin(); it != Q2P.end(); it++) {
        cout << table[it->second] << ' ';
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    set<pair<int, int>> Points;
    int u, v;
    int i;
    for (i = 0; i < M; i++) {
        cin >> u >> v;
        if (u == v)
            continue;

        if (u > v) swap(u, v);
        Points.insert({ u, v });
    }

    cout << M - Points.size() << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    map<int, vector<int>> tree;
    int a, b;
    int i;
    for (i = 0; i < N - 1; i++) {
        cin >> a >> b;
        tree[a - 1].push_back(b - 1);
        tree[b - 1].push_back(a - 1);
    }

    bool ans = false;
    for (i = 0; i < tree.size(); i++) {
        if (tree[i].size() == N - 1) {
            ans = true;
            break;
        }
    }

    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}

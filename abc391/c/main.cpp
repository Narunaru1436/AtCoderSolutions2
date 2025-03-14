#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<vector<int>> query;
    vector<int> temp(3, 0);
    int x, p, h;
    int i, j;
    for (i = 0; i < Q; i++) {
        cin >> x;
        temp[0] = x;
        if (x == 1) {
            cin >> p >> h;
            temp[1] = p;
            temp[2] = h;
        }
        query.push_back(temp);
    }

    vector<int> holes(N + 1);   // はとがどの巣にいるか
    vector<int> pigeons(N + 1, 1); // 巣に何匹いるか

    for (i = 1; i <= N; i++) {
        holes[i] = i;
    }
    int preHole;
    int ans = 0;
    for (i = 0; i < query.size(); i++) {
        x = query[i][0];
        if (x == 1) {
            p = query[i][1];
            h = query[i][2];

            preHole = holes[p];
            holes[p] = h;

            if (--pigeons[preHole] == 1) ans--;
            if (++pigeons[h] == 2) ans++;
        }
        else {
            cout << ans << endl;
        }
    }
    
    return 0;
}

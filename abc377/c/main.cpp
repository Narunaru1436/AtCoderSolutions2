#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    int dx[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
    int dy[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };

    set<pair<int, int>> blues;
    int a, b;
    int x, y;
    int i, j;
    for (i = 0; i < m; i++) {
        cin >> a >> b;
        blues.insert({ a, b });

        for (j = 0; j < 8; j++) {
            x = a + dx[j];
            y = b + dy[j];
            
            if ((x < 1 || n < x) || (y < 1 || n < y))
                continue;

            blues.insert({ x, y });
        }
    }

    cout << n * n - blues.size() << endl;
    return 0;
}

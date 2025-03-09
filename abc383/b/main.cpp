#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W, D;
    cin >> H >> W >> D;

    vector<string> grid(H);
    vector<pair<int, int>> floors;

    int i, j, k;
    for (i = 0; i < H; i++) {
        cin >> grid[i];
        for (j = 0; j < W; j++) {
            if (grid[i][j] == '.')
                floors.emplace_back(i, j); // 床の座標だけ取得する
        }
    }
    
    int max_humidified = 0;
    int floor_count = floors.size();
    int x1, y1, x2, y2;
    for (i = 0; i < floor_count; i++) {
        for (j = i + 1; j < floor_count; j++) {
            x1 = floors[i].first;
            y1 = floors[i].second;
            x2 = floors[j].first;
            y2 = floors[j].second;

            set<pair<int, int>> humidified;
            int x3, y3;
            for (k = 0; k < floor_count; k++) {
                x3 = floors[k].first;
                y3 = floors[k].second;
                if (abs(x3 - x1) + abs(y3 - y1) <= D || abs(x3 - x2) + abs(y3 - y2) <= D) {
                    humidified.emplace(x3, y3); // 重要→insertと同じ動作でinsertよりも早い
                }
            }

            max_humidified = max(max_humidified, (int)humidified.size());
        }
    }

    cout << max_humidified << endl;
    return 0;
}

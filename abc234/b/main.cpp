#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> Points;
    int i, j;
    int x, y;
    for (i = 0; i < N; i++) {
        cin >> x >> y;
        Points.push_back({ x, y });
    }

    double MaxDist = -1;
    for (i = 0; i < N; i++) {
        for (j = i + 1; j < N; j++) {
            MaxDist = max(MaxDist, pow(Points[i].first - Points[j].first, 2) + pow(Points[i].second - Points[j].second, 2));
        }
    }

    MaxDist = sqrt(MaxDist);

    cout.precision(10); // 出力される小数点以下の桁数を最大で10桁に設定
    cout << fixed << MaxDist << endl;
    return 0;
}

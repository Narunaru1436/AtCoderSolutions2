#include <bits/stdc++.h>
using namespace std;

// ユークリッド距離の計算
double CalcDistance(double x1, double y1, double x2, double y2) {
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main() {
    int N, K;
    cin >> N >> K;
 
    vector<int> A(K);
    int i, j;
    for (i = 0; i < K; i++) {
        cin >> A[i];
        A[i]--;
    }
 
    vector<pair<int, int>> XY(N);
    for (i = 0; i < N; i++) {
        cin >> XY[i].first >> XY[i].second;
    }
 
    double minDist;
    double minR = 0.0;
    for (i = 0; i < N; i++) {   
        minDist = 1e18;
        for (j = 0; j < K; j++) {
            minDist = min(minDist, CalcDistance(XY[i].first, XY[i].second, XY[A[j]].first, XY[A[j]].second));
        }
 
        minR = max(minR, minDist);
    }
 
    // 誤差10^5以下にする
    cout << fixed << setprecision(10) << minR << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> A(K);
    for (auto& a : A) cin >> a;

    vector<pair<int, int>> XY(N);
    int x, y;
    int i, j;
    for (i = 0; i < N; i++) {
        cin >> x >> y;
        XY[i].first = x;
        XY[i].second = y;
    }

    vector<double> distList(K);
    double dist = -1;
    double ans;
    for (i = 0; i < K; i++) {
        for (j = 0; j < N; j++) {
            if (j == A[i] - 1)
                continue;

            if (dist < 0) dist = hypot(XY[A[i]].first - XY[j].second, XY[A[i]].second - XY[j].second);
            else dist = max(dist, hypot(XY[A[i]].first - XY[j].second, XY[A[i]].second - XY[j].second));
        }

        distList[i] = dist;
    }

    ans = *min_element(distList.begin(), distList.end());
    
    cout.precision(10); 
    cout << fixed << ans << endl;
    return 0;
}

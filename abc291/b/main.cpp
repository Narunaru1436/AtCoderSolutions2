#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> X(5 * N);
    for (auto &x : X) cin >> x;

    sort(X.begin(), X.end());

    int i;
    for (i = 0; i < N; i++) {
        X.erase(remove(X.begin(), X.end(), X[0]), X.end());
        X.erase(remove(X.begin(), X.end(), X[X.size() - 1]), X.end());
    }

    // 重要→配列の要素の合計値
    double Total = accumulate(X.begin(), X.end(), 0.0);
    
    double ans = Total / X.size();
    cout << ans << endl;

    return 0;
}

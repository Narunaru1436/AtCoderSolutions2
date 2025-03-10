#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, M, L, R;
    cin >> A >> M >> L >> R;
    
    // L 以上の最小の A + kM の k を求める
    long long min_k = (L - A + M - 1) / M;
    // R 以下の最大の A + kM の k を求める
    long long max_k = (R - A) / M;
    
    // クリスマスツリーの本数を求める
    cout << (max_k - min_k + 1) << "\n";
    return 0;
}

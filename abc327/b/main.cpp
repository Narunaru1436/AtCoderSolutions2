#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll B;
    cin >> B;

    // A の探索範囲は 1 以上 15 以下
    for (ll A = 1; A <= 15; A++) {
        ll power = 1;
        
        // A^A を計算
        for (ll i = 0; i < A; i++) {
            if (power > B / A) { // オーバーフローを防ぐ
                power = B + 1;  // B より大きくしてループを抜ける
                break;
            }
            power *= A;
        }
        
        // A^A が B なら答え
        if (power == B) {
            cout << A << endl;
            return 0;
        }
    }
    
    // どの A でも見つからなかった場合
    cout << -1 << endl;
}

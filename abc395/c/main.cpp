#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    
    for (int i = 0; i < N; i++) cin >> A[i];

    unordered_map<int, int> count;  // 数値の出現回数を管理
    int left = 0, min_length = N + 1;  // 最小の長さ（N+1で初期化）

    for (int right = 0; right < N; right++) {
        count[A[right]]++;  // 右端の要素を追加

        // もしA[right]の出現回数が2以上なら、条件を満たす部分列ができる
        while (count[A[right]] > 1) {
            min_length = min(min_length, right - left + 1);  // 区間の長さを更新
            count[A[left]]--;  // 左端の要素を削除
            left++;  // 左端を縮める
        }
    }

    if (min_length == N + 1) cout << -1 << endl;  // 見つからなかった場合
    else cout << min_length << endl;  // 最小の長さを出力

    return 0;
}

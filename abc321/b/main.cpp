#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;

    vector<int> A(N - 1);
    for (auto& x : A) cin >> x; // 今後はこの値セット方法も使っていく

    // 最終ラウンドの点数が0～100点の場合を一つずつ調べる
    vector<int> tempA;
    int LastPoint, i;
    int CurSum;
    for (LastPoint = 0; LastPoint <= 100; LastPoint++) {
        tempA = A;
        tempA.push_back(LastPoint);
        sort(tempA.begin(), tempA.end());

        CurSum = 0;
        for (i = 1; i < N - 1; i++) {
            CurSum += tempA[i];
        }

        if (CurSum >= X) {
            cout << LastPoint << endl;
            return 0;
        }

    }

    cout << -1 << endl;
    return 0;
}

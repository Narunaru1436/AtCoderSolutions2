#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> X;
    int P = 0;
    int a;
    int i, j;
    for (i = 0; i < N; i++) {
        X.insert(X.begin(), 0); // 重要→配列の先頭に0を追加

        cin >> a;
        for (j = 0; j < X.size(); j++) {
            X[j] += a;
            if (X[j] > 3) P++;
        }

        X.erase(remove_if(X.begin(), X.end(), [](int x) {
            return x > 3; // 4以上の要素を削除
        }), X.end());
    }

    cout << P << endl;
    return 0;
}

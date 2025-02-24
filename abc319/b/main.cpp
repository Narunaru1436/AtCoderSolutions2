#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int i, k;

    // 約数のリスト作成
    vector<int> A;
    for (i = 1; i <= N; i++) {
        if (N % i == 0 && (1 <= i && i <= 9)) A.push_back(i);
    }

    int minValue;
    int j;
    for (i = 0; i <= N; i++) {
        minValue = 10;
        for (k = 0; k < A.size(); k++) {
            j = A[k];
            if (i % (N / j) == 0) { // 条件に合うjが存在する
                minValue = min(minValue, j);
            }
        }
        if (minValue == 10) cout << '-';
        else cout << to_string(minValue);
    }
    return 0;
}

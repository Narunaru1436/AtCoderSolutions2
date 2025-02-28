#include <bits/stdc++.h>
using namespace std;

int main() {
    int N = 8;

    vector<string> S(N);
    for (auto &s : S) cin >> s;

    int a = (int)'a'; // 97

    int i, j;
    for (i = N - 1; i >= 0; i--) {
        for (j = 0; j < N; j++) {
            if (S[i][j] == '*') {
                char ca = (char)(a + j);
                cout << ca << to_string(N - i) << endl;
                return 0;
            }
        }
    }

    return 0;
}

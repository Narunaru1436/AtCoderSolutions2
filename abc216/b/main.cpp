#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> S(N);
    vector<string> T(N);

    int i, j;
    for (i = 0; i < N; i++) cin >> S[i] >> T[i];

    bool ans = false;
    for (i = 0; i < N; i++) {
        for (j = i + 1; j < N; j++) {
            if (S[i] == S[j] && T[i] == T[j]) {
                ans = true;
                break;
            }
        }
    }

    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}

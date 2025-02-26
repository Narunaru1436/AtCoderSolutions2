#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<string> C(N);
    vector<string> D(M);
    vector<int> P(M + 1);

    // ↑pairの配列のほうがいいか

    for (auto& s : C) cin >> s;
    for (auto& s : D) cin >> s;
    for (auto& i : P) cin >> i;
    
    int i;
    int Total = 0;
    for (i = 0; i < N; i++) {
        vector<string>::iterator itr = find(D.begin(), D.end(), C[i]);
        if (itr == D.end()) {
            Total += P[0];
        }
        else {
            int nIndex = distance(D.begin(), itr) + 1; // 要素のインデックス

            Total += P[distance(D.begin(), itr) + 1];
        }
    }

    cout << Total << endl;
    return 0;
}

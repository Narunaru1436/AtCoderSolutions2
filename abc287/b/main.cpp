#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<string> S(N);
    vector<string> T(M);
    for (auto& s : S) cin >> s;
    for (auto& t : T) cin >> t;
    
    int Count = 0;
    int i, j;
    string Cur;
    for (i = 0; i < N; i++) {
        Cur = S[i].substr(3);
        for (j = 0; j < M; j++) {
            if (Cur == T[j]) {
                Count++;
                break;
            }
        }
    }
    
    cout << Count << endl;
    return 0;
}

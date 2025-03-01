#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<string> S(N);
    for (auto& s : S) cin >> s;

    int i, j, k;
    int Count = 0;
    string s1, s2;
    for (i = 0; i < N; i++) {
        s1 = S[i];
        for (j = i + 1; j < N; j++) {
            s2 = S[j];
            for (k = 0; k < M; k++) {
                if (s1[k] == 'x' &&  s2[k] == 'x')
                    break;
            }
            if (k == M) Count++;
        }
    }

    cout << Count << endl;
    return 0;
}

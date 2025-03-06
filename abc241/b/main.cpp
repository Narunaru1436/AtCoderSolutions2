#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    map<long long, int> A;
    int i;
    int x;
    for (i = 0; i < N; i++) {
        cin >> x;
        A[x]++;
    }

    bool ans = true;
    for (i = 0; i < M; i++) {
        cin >> x;
        if (A[x] == 0) {
            ans = false;
            break;
        }
        A[x]--;
    }

    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}

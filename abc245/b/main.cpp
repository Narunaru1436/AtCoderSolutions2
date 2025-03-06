#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    int i;
    for (i = 0; i < N; i++) cin >> A[i];

    int ans = 0;
    while (ans <= 2000) {
        if (count(A.begin(), A.end(), ans) == 0) {
            break;
        }
        ans++;
    }

    cout << ans << endl;
    return 0;
}

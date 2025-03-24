#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    long long C, K;
    cin >> N >> C >> K;

    vector<long long> T(N);
    for (auto& t : T) cin >> t;

    sort(T.begin(), T.end());

    int ans = 0;
    int i = 0;
    while (i < N) {
        int start_time = T[i];
        int j = i;
        while (j < N && j - i < C && T[j] <= start_time + K) {
            j++;
        }
        ans++;
        i = j;
    }

    cout << ans << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> S(N);
    for (auto& s : S) cin >> s;

    vector<long long> ans;
    ans.push_back(S[0]);
    long long diff;
    int i;
    for (i = 1; i < N; i++) {
        diff = S[i] - S[i - 1];
        ans.push_back(diff);
    }

    for (auto s : ans) cout << s << " ";
    return 0;
}

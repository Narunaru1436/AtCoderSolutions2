#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<string> ans(K);
    int i;
    for (i = 0; i < K; i++) cin >> ans[i];

    sort(ans.begin(), ans.end());

    for (auto s : ans) cout << s << endl;
    return 0;
}

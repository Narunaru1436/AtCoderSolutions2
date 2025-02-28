#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<int> A(N + 1, 0);
    vector<string> ans;
        
    int c, x;
    int i;
    for (i = 0; i < Q; i++) {
        cin >> c >> x;

        if (c == 1) A[x] += 1;
        else if (c == 2) A[x] += 2;
        else {
            if (A[x] >= 2) ans.push_back("Yes");
            else ans.push_back("No");
        }
    }

    for (i = 0; i < ans.size(); i++) cout << ans[i] << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);

    int i;
    for (i = 0; i < N; i++) cin >> A[i];

    string ans = "Yes";
    for (i = 1; i < N; i++) {
        if (A[i] <= A[i - 1]) {
            ans = "No";
            break;
        }
    }
    
    cout << ans << endl;
    return 0;
}

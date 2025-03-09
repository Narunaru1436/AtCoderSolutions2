#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N;

    vector<pair<long long , long long>> X(N + 1);
    int i;
    for (i = 1; i <= N; i++) {
        cin >> X[i].first >> X[i].second;
    }

    cin >> Q;

    vector<int> ans;
    long long t, d;
    long long q, r, remainder;
    for (i = 0; i < Q; i++) {
        cin >> t >> d;

        q = X[t].first;
        r = X[t].second;
        remainder = d % q;
        if (remainder == r) {
            cout << d << endl;
        }
        else if (remainder < r) {
            cout << d + (r - remainder) << endl;
        }
        else {
            cout << d + (q - remainder + r) << endl;
        }
    }

    return 0;
}

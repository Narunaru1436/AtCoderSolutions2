#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    set<vector<long long>> A;
    vector<long long> x;
    int L;
    int i, j;
    for (i = 0; i < N; i++) {
        cin >> L;
        x.resize(L);
        for (j = 0; j < L; j++) cin >> x[j];
        A.insert(x);
    }

    cout << A.size() << endl;
    return 0;
}

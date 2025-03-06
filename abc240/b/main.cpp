#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    set<long long> A;
    long long a;
    int i;
    for (i = 0; i < N; i++) {
        cin >> a;
        A.insert(a);
    }

    cout << A.size() << endl;
    return 0;
}

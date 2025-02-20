#include <bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    cin >> Q;

    vector<long long> A;

    int i;
    vector<long long> Num(Q);
    vector<long long> Val(Q);
    for (i = 0; i < Q; i++) {
        cin >> Num[i] >> Val[i];
    }

    for (i = 0; i < Q; i++) {
        if (Num[i] == 1) {
            A.push_back(Val[i]);
        }
        else {
            cout << A[A.size() - Val[i]] << endl;
        }
    }
    
    return 0;
}

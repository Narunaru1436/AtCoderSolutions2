#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> A(N);
    for (auto& a : A) cin >> a;

    vector<long long> Table;
    long long MinLength = N;
    long long i, j;
    for (i = 0; i < N; i++) {
        if (find(Table.begin(), Table.end(), A[i]) != Table.end())
            continue;
        Table.push_back(A[i]);
        for (j = i + 1; j < N; j++) {
            if (j - i > MinLength)
                break;
            
            if (A[i] == A[j]) {
                MinLength = min(MinLength, j - i + 1);
                break;
            }
        }
    }

    if (MinLength == N) MinLength = -1;
    cout << MinLength << endl;
    return 0;
}

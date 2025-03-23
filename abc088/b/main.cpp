#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (auto& a : A) cin >> a;

    sort(A.begin(), A.end());
    reverse(A.begin(), A.end());

    int Apoint = 0;
    int Bpoint = 0;
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) Apoint += A[i];
        else Bpoint += A[i];
    }

    cout << Apoint - Bpoint << endl;
    return 0;
}

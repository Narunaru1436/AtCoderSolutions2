#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int &i : A) cin >> i;

    vector<int> B;
    int gap;
    int left, right;
    int i, j;
    B.push_back(A[0]);
    for (i = 1; i < N; i++) {
        left = A[i - 1];
        right = A[i];

        gap = right - left;
        if (gap > 0) {
            for (j = left + 1; j < right; j++) {
                B.push_back(j);
            }
        }
        else {
            for (j = left - 1; j > right; j--) {
                B.push_back(j);
            }
        }

        B.push_back(right);
    }
    
    for (int i : B) cout << i << " ";
    return 0;
}

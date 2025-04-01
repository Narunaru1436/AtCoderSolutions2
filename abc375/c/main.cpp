#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> a(n);
    int i, j;
    for (i = 0; i < n; i++) cin >> a[i];
    
    vector<string> b = a;
    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            int ni = i, nj = j;
            int k = min({ ni + 1, nj + 1, n - ni, n - nj });
            for (int ki = 0; ki < k; ki++) {
                swap(ni, nj);
                nj = n - 1 - nj;
            }
            b[ni][nj] = a[i][j];
        }
    }

    for (i = 0; i < n; i++) cout << b[i] << endl;
    return 0;
}

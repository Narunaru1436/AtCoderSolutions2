#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> XYZ(N + 1);
    int i, j, k;
    
    for (i = 0; i <= N; i++) {
        XYZ[i] = i;
    }

    int x, y, z;
    for (i = 0; i <= N; i++) {
        for (j = 0; j <= N; j++) {
            for (k = 0; k <= N; k++) {
                x = XYZ[i];
                y = XYZ[j];
                z = XYZ[k];
                if (x + y + z <= N) cout << to_string(x) + " " + to_string(y) + " " + to_string(z) << endl;
            }
        }
    }
    
    return 0;
}

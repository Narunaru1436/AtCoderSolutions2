#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> P(N);

    int i;
    for (i = 0; i < N; i++) cin >> P[i];

    int Q;
    cin >> Q;

    vector<vector<int>> AB(Q, vector<int>(2, 0));
    int j;
    for (i = 0; i < Q; i++) {
        cin >> AB[i][0] >> AB[i][1];
    }

    for (i = 0; i < Q; i++) {
        for (j = 0; j < N; j++) {            
            if (P[j] == AB[i][0] or P[j] == AB[i][1]) {
                cout << P[j] << endl;
                break;
            }
        }
    }
    
    return 0;
}

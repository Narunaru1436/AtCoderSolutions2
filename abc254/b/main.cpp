#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> A(N);
    vector<int> temp;

    int i, j;
    for (i = 0; i < N; i++) {
        temp.resize(i + 1);
        for (j = 0; j < i + 1; j++) {
            if (j == 0 || j == i) {
                temp[j] = 1;
            }
            else {
                temp[j] = A[i - 1][j - 1] + A[i - 1][j];
            }

            cout << temp[j] << ' ';
        }

        A[i] = temp;
        cout << endl;
    }
    
    return 0;
}

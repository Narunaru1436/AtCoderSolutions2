#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    map<int, int> A;
    int i;
    int x;
    for (i = 0; i < 4 * N - 1; i++) {
        cin >> x;
        A[x]++;
    }

    for (i = 1; i <= 4 * N - 1; i++) {
        if (A[i] == 3) {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}

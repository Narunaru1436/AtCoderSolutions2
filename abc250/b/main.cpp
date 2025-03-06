#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    for (int i = 0; i < N * A; i++) {
        for (int j = 0; j < N * B; j++) {
            cout << (((i / A + j / B) % 2 == 0) ? '.' : '#');
        }
        cout << endl;
    }
    
    return 0;
}

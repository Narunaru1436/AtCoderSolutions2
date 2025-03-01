#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    string S;
    cin >> S;

    int Count = 0;
    int i;
    for (i = 0; i < N; i++) {
        if (S[i] == 'o') {
            if (Count >= K) S[i] = 'x';
            else Count++;
        }
    }
    
    cout << S << endl;
    return 0;
}

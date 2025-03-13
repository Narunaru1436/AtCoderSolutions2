#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    int current = 0;
    int nMax = S.size();
    while (current < nMax) {
        if (S[current] == 'W' && S[current + 1] == 'A') {
            S[current] = 'A';
            S[current + 1] = 'C';
            
            if (current > 0)
                current--;
        }
        else {
            current++;
        }
    }

    cout << S << endl;
    return 0;
}

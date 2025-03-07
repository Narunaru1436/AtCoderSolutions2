#include <bits/stdc++.h>
using namespace std;

int main() {
    int L, R;
    cin >> L >> R;

    string S;
    cin >> S;
    
    reverse(S.begin() + L - 1, S.begin() + R);
    cout << S << endl;
    return 0;
}

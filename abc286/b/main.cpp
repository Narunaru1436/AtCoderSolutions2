#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    string S;
    cin >> S;
    
    string ans = "";
    string Cur;
    int i = 0;
    while (i < N) {
        Cur = S.substr(i, 2);
        if (Cur == "na") {
            Cur = "nya";
            i += 2;
        }
        else {
            Cur = S[i];
            i++;
        }

        ans += Cur;
    }
    
    cout << ans << endl;
    return 0;
}

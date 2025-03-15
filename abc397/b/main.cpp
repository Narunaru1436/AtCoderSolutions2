#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int Len = s.length();
    vector<char> S(Len + 1);
    int i;
    for (i = 0; i < Len; i++) S[i + 1] = s[i];
    
    int ans = 0;
    while (true) {
        Len = S.size();

        for (i = 1; i < Len; i++) {
            if (i % 2 == 0 && S[i] != 'o') {
                S.insert(S.begin() + i, 'o');
                ans++;
                break;
            }

            if (i % 2 == 1 && S[i] != 'i') {
                S.insert(S.begin() + i, 'i');
                ans++;
                break;
            }
        }

        if (i == Len) {
            if ((Len - 1) % 2 != 0 && S[Len - 1] == 'i') {
                S.push_back('o');
                ans++;
            }
            else if ((Len - 1) % 2 != 0 && S[Len - 1] == 'o') {
                S.push_back('i');
                ans++;
            }
            break;
        }
    }

    cout << ans << endl;
    return 0;
}

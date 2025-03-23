#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> Cards(14, 0);
    int x;
    int i;
    for (i = 0; i < 7; i++) {
        cin >> x;
        Cards[x]++;
    }

    bool TwoFlg = false;
    bool ThirdFlg = false;
    for (i = 1; i <= 13; i++) {
        if (Cards[i] == 2) TwoFlg = true;
        else if (Cards[i] == 3) ThirdFlg = true;
    }
    
    if (TwoFlg && ThirdFlg) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}

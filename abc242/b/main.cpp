#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    vector<char> X;
    for (auto& s : S) X.push_back(s);

    sort(X.begin(), X.end());
    string ans = "";
    for (auto s : X) ans += s;

    // stringのSを直接ソートできる
    //sort(S.begin(), S.end());

    cout << ans << endl;
    return 0;
}

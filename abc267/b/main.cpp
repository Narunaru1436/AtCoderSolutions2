#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    if (s[0] == '1') { cout << "No\n";return 0; }
    vector<int> line = { 4,3,5,2,4,6,1,3,5,7 };
    set<int> pln; // ピンが一本でも立っている列番号を格納.格納されない列 = 全ピン倒れている列
    for (int i = 0;i < 10;i++) {
        if (s[i] == '1') { 
            pln.insert(line[i]); 
        }
    }
    if (pln.empty()) { cout << "No\n";return 0; }
    int mn = (*pln.begin());
    int mx = (*pln.rbegin());
    if (mx - mn + 1 != pln.size()) { cout << "Yes\n"; }
    else { cout << "No\n"; }
    return 0;
}

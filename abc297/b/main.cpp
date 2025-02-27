#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    // 重要→複数インデックスの管理
    map<char, vector<int>> mp; // 例)文字列Sに含まれるBのインデックスを複数格納

    int i;
    for (i = 0; i < S.length(); i++) {
        mp[S[i]].push_back(i);
    }

    bool Flg = true;
    Flg &= mp['B'][0] % 2 != mp['B'][1] % 2; // ここスマート
    Flg &= mp['R'][0] < mp['K'][0] && mp['K'][0] < mp['R'][1];

    cout << (Flg ? "Yes\n" : "No\n");
    return 0;
}

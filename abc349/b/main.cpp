#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    vector<int> Table(26, 0);
    for (char c : S) Table[c - 'a']++;

    int i, j;
    int Count = 0;
    string Answer = "Yes";
    for (i = 1; i <= S.length(); i++) { // 最大出現回数は文字列の長さに等しい
        // 出現回数 == iのアルファベットが0 or 2ならばYes

        Count = 0;
        for (j = 0; j < 26; j++) {
            if (Table[j] == i) Count++;
        }

        if (Count != 0 && Count != 2) {
            Answer = "No";
            break;
        }
    }

    cout << Answer << endl;
}

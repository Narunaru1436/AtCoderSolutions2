#include <bits/stdc++.h>
using namespace std;

// 登録済みの部分文字列ならtrue
bool ExistInTable(vector<string> Table, string str)
{
    int i;
    size_t nMax = Table.size();
    for (i = 0; i < nMax; i++) {
        if (str == Table[i]) {
            return true;
        }
    }

    return false;
}

int main()
{
    string S;
    cin >> S;

    vector<string> Table;
    string strCur;
    int i, j;
    size_t nMax = S.length();
    int Count = 0;
    for (i = 0; i < nMax; i++) {
        strCur = S[i];
        for (j = i; j < nMax; j++) {
            if (j != i) {
                strCur += S[j];
            }
            if (!ExistInTable(Table, strCur)) {
                Table.push_back(strCur);
                Count++;
            }
        }
    }

    cout << Count << endl;
    return 0;
}

// 解答例
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    set<string> st;
    for(int i = 0; i < s.size(); i++) {
        for(int j = 1; i + j <= s.size(); j++) {
            st.insert(s.substr(i, j)); // setを使えば重複を消してくれる
        }
    }
    cout << st.size() << endl;
}

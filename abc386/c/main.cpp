#include<bits/stdc++.h>
using namespace std;

bool InsertCheck386C(string s, string t)
{
    int pc = 0;
    int sc = 0;
    int sl = s.size();
    int tl = t.size();

    // 先頭からチェック
    while (pc < sl) {
        if (s[pc] == t[pc]) { pc++; }
        else {break;}
    }
    // 末尾からチェック
    while (sc < sl) {
        if (s[sl - sc - 1] == t[tl - sc - 1]) { sc++; }
        else {break;}
    }

    // 先頭からの一致数 + 末尾からの一致数 >= 挿入前の文字列数
    if (pc + sc >= sl) 
        return true;
    else
        return false;
}

bool ReplaceCheck386C(string s, string t)
{
    int cnt = 0;
    int i;
    for (i = 0; i < s.size(); i++) {
        if (s[i] != t[i]) cnt++;
    }

    if (cnt <= 1)
        return true;
    else
        return false;
}

int main()
{
    int K;
    string S, T;
    cin >> K >> S >> T;

    if (S == T) {
        cout << "Yes" << endl;
        return 0;
    }

    int SLen = S.size();
    int TLen = T.size();

    bool ans = false;
    if (SLen == TLen) {
        ans = ReplaceCheck386C(S, T);
    }
    else if (SLen + 1 == TLen) {
        ans = InsertCheck386C(S, T);
    }
    else if (SLen - 1 == TLen) {
        ans = InsertCheck386C(T, S);
    }

    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}
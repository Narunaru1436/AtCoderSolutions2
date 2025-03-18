#include <bits/stdc++.h>
using namespace std;

bool InsertCheck386C(string s, string t)
{
    if (s.length() + 1 != t.length()) return false;

    for (int i = 0; i < t.length(); i++) {
        string temp = s.substr(0, i) + t[i] + s.substr(i);
        if (temp == t) return true;
    }
    return false;
}

bool DeleteCheck386C(string s, string t)
{
    if (s.length() - 1 != t.length()) return false;

    for (int i = 0; i < s.length(); i++) {
        string temp = s.substr(0, i) + s.substr(i + 1);
        if (temp == t) return true;
    }
    return false;
}

bool ReplaceCheck386C(string s, string t)
{
    if (s.length() != t.length()) return false;

    int diffCount = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != t[i]) diffCount++;
        if (diffCount > 1) return false;
    }
    return diffCount == 1;
}

int main()
{
    int K;
    string S, T;
    cin >> K >> S >> T;

    bool ans = ReplaceCheck386C(S, T) || DeleteCheck386C(S, T) || InsertCheck386C(S, T);

    cout << (ans ? "Yes" : "No") << endl;
}

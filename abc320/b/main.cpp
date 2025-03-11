#include <bits/stdc++.h>
using namespace std;

bool IsPalindrome2(string s)
{
    int len = s.length();
    if (len == 1)
        return true;
    else if (len == 0) 
        return false;

    int mid = (len + 1) / 2;
    bool ans = true;
    int i;
    for (i = 0; i <= mid; i++) {
        if (s[i] != s[len - 1 - i]) {
            ans = false;
            break;
        }
    }

    return ans;
}

int main()
{
    string S;
    cin >> S;

    string temp;
    int ans = 0;
    int i, j;
    for (i = 0; i < S.length(); i++) {
        for (j = i; j < S.length(); j++) {
            temp = S.substr(i, j - i + 1);
            if (IsPalindrome2(temp)) {
                ans = max(ans, (int)temp.length());
            }
        }
    }

    cout << ans << endl;
}



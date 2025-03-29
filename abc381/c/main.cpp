#include <bits/stdc++.h>
using namespace std;

int SubSolution381C(string s, int st) 
{
    int ret = 1;
    int l = st - 1;
    int r = st + 1;
    while (l >= 0 && r < s.size()) {
        if (s[l] != '1' || s[r] != '2') {
            break;
        }

        l--;
        r++;
        ret+=2;
    }

    return ret;
}

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int ans = 1;
    int i;
    for (i = 0; i < n; i++) {
        if (s[i] == '/') {
            ans = max(ans, SubSolution381C(s, i));
        }
    }

    cout << ans << endl;
    return 0;
}
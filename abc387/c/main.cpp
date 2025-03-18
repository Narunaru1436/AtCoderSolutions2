#include <bits/stdc++.h>
using namespace std;

bool isSnakeNumber(long long n)
{
    string s = to_string(n);
    size_t len = s.length();
    char first_digit = s[0];

    size_t i;
    for (i = 1; i < len; i++) {
        if (s[i] >= first_digit) {
            return false;
        }
    }

    return true;
}

int main()
{
    long long L, R;
    cin >> L >> R;

    long long i;
    long long ans = 0;
    for (i = L; i <= R; i++) {
        if (isSnakeNumber(i)) ans++;
    }

    cout << ans << endl;
    return 0;
}
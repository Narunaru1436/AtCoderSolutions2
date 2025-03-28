#include <bits/stdc++.h>
using namespace std;

long long CalcKeta(long long c)
{
    int ret = 0;
    while (c > 0) {
        c /= 10;
        ret++;
    }

    return ret;
}

int main() 
{
    long long A, B, X;
    cin >> A >> B >> X;

    long long l = 0;
    long long r = 1e9 + 1;
    while (r - l > 1) {
        long long c = (l + r) / 2;
        if (A * c + B * CalcKeta(c) <= X) {
            l = c;
        }
        else {
            r = c;
        }
    }

    cout << l << endl;
    return 0;
}

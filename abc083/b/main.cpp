#include <bits/stdc++.h>
using namespace std;

long long CalcDigitSum(long long n)
{
    long long x = 0;
    while (n > 0) {
        x += n % 10;
        n /= 10;
    }

    return x;
}

int main()
{
    int N, A, B;
    cin >> N >> A >> B;

    int x;
    int ans = 0;
    int i;
    for (i = 1; i <= N; i++) {
        x = CalcDigitSum(i);
        if (A <= x && x <= B) ans += i;
    }

    cout << ans << endl;
    return 0;
}
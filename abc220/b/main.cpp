#include <bits/stdc++.h>
using namespace std;

long long N2Dec(int K, string x) {
    long long ret = 0;
    for (char c : x) {
        ret = ret * K + (c - '0');  // K進法を展開
    }
    return ret;
}

int main()
{
    int K;
    cin >> K;
    string A, B;
    cin >> A >> B;

    cout << N2Dec(K, A) * N2Dec(K, B) << endl;
}

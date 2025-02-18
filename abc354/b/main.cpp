#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<string> S(N);
    int value;
    int C = 0;

    int i;
    for (i = 0; i < N; i++) {
        cin >> S[i] >> value;
        C += value;
    }

    // 辞書順にソート
    sort(S.begin(), S.end());

    int nIndex = C % N;
    for (i = 0; i < N; i++) {
        if (i == nIndex) cout << S[i] << endl;
    }

    return 0;
}
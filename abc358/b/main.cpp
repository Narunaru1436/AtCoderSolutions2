#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, A;
    cin >> N >> A;

    vector<int> Table(N);
    vector<int> Result(N);
    int i;

    for (i = 0; i < N; i++) cin >> Table[i];

    int nCurrentTime = 0; // 最後に購入が完了した時点での処理時間
    for (i = 0; i < N; i++) {
        if (nCurrentTime < Table[i]) { // Table[i]番目が来た時に誰もいなければ即購入する
            nCurrentTime = Table[i];
        }

        Result[i] = nCurrentTime + A;
        nCurrentTime += A;
    }

    for (i = 0; i < N; i++) cout << Result[i] << endl;

}
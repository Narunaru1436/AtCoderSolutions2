#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> D(N + 1);
    int i, j, k;
    for (i = 1; i <= N; i++) cin >> D[i];

    string Month, Day;
    bool bFlg;
    int Count = 0;
    for (i = 1; i <= N; i++) {
        bFlg = true;
        Month = to_string(i);

        // 月がゾロ目かどうか
        for (j = 0; j < Month.size(); j++) {
            // 1文字
            if (j + 1 == Month.size()) break;
            
            // 2文字以上
            if (Month[j] != Month[j + 1]) {
                bFlg = false;
                break;
            }
        }

        if (!bFlg) continue;

        // 日がゾロ目かどうか
        for (j = 1; j <= D[i]; j++) {
            Day = to_string(j);
            bFlg = true;

            // 1文字
            if (Day.size() == 1) {
                if (Day[0] == Month[0]) {
                    Count++;
                    continue;
                }
                else {
                    continue;
                }
            }

            // 2文字以上
            for (k = 0; k < Day.size(); k++) {
                if (k + 1 == Day.size()) break;
                if (Day[k] != Day[k + 1]) {
                    bFlg = false;
                    break;
                }
            }

            if (bFlg && Day[0] == Month[0]) {
                Count++;
            }

        }
    }

    cout << Count << endl;
    return 0;
}

// 解答例
/*
int main() {
    int N;
    cin >> N;
    vector<int> D(N);
    for (auto&& d : D)
        cin >> d;

    int ans = 0;
    for (int m = 1; m <= N; ++m) {
        string month = to_string(m);
        for (int d = 1; d <= D[m - 1]; ++d) {
            string date = month + to_string(d);
            if (size(set<char>(date.begin(), date.end())) == 1) // setの重複排除性を利用したかたち
                ++ans;
        }
    }
    cout << ans << endl;

    return 0;
}
*/

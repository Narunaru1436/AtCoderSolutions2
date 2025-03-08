#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int i, j, k;
    int x, a, b, pre;
    bool bNext = false;
    int ans = 0;
    for (i = 0; i < N; i++) {
        cin >> x;
        bNext = false;
        for (a = 1; a <= 1000; a++) {
            if (bNext)
                break;
            for (b = 1; b <= 1000; b++) {
                pre = 4 * a * b + 3 * a + 3 * b;
                if (pre > x)
                    break;

                if (pre == x) {
                    ans++;
                    bNext = true;
                    break;
                }
            }
        }
    }

    cout << N - ans << endl;
    return 0;
}

// 解答例
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    unordered_set<int> valid_values;  // あり得る面積の集合

    // 事前にすべての可能な (4ab + 3a + 3b) を計算し、セットに保存
    for (int a = 1; a <= 100; a++) {
        for (int b = 1; b <= 100; b++) {
            int area = 4 * a * b + 3 * a + 3 * b;
            if (area > 1000) break; // 1000 を超えたら以降は不要
            valid_values.insert(area);
        }
    }

    // ↑あり得る面積の集合を予めunordered_setで用意しておくことで、入力値とsetテーブルを照合してO(1)で判定できる

    int count = 0;  // 誤った予想のカウント
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        if (valid_values.find(x) == valid_values.end()) {
            count++;  // セットにないなら誤り
        }
    }

    cout << count << endl;
    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    long long Y;
    cin >> N >> Y;

    int ans1 = -1;
    int ans2 = -1;
    int ans3 = -1;

    Y /= 1000;
    long long total = 0;
    int i, j, k;
    for (i = 0; i <= N; i++) {
        for (j = 0; i + j <= N; j++) {
            total = i * 10 + j * 5 + (N - i - j);
            if (total == Y) {
                ans1 = i;
                ans2 = j;
                ans3 = N - i - j;
                break;
            }
        }
    }

    cout << ans1 << " " << ans2 << " " << ans3 << endl;
    return 0;
}

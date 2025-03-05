#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> P(N + 1);
    int i;
    for (i = 2; i <= N; i++) cin >> P[i];

    int count = 0;
    int current = N;
    while (current != 1) {
        current = P[current];
        count++;
    }

    cout << count << endl;
    return 0;
}

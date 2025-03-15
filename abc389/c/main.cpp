#include <bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    cin >> Q;

    vector<long long> snake;
    long long x, k, l;
    long long id = 0, now = 0;
    int i;
    for (i = 0; i < Q; i++) {
        cin >> x;
        if (x == 1) {
            cin >> l;
            snake.push_back(now);
            now += l;
        }
        else if (x == 2) {
            id++;
        }
        else {
            cin >> k;
            k--;
            cout << snake[id + k] - snake[id] << endl;
        }
    }

    return 0;
}

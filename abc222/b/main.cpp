#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, P;
    cin >> N >> P;

    int x;
    int Count = 0;
    int i;
    for (i = 0; i < N; i++) {
        cin >> x;
        if (x < P) Count++;
    }

    cout << Count << endl;
    return 0;
}

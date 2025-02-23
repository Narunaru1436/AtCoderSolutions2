#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int i;
    int x, y, z;
    for (i = N; i <= 919; i++) {
        x = i / 100;
        y = (i - x * 100) / 10;
        z = i - (x * 100 + y * 10);

        if (x * y == z) {
            cout << i << endl;
            break;
        }
    }
    
    return 0;
}

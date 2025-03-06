#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string T;
    cin >> N;
    cin >> T;
    
    int x = 0;
    int y = 0;
    int Dir = 1; // 0:北 1:東 2:南 3:西
    int i;
    for (i = 0; i < N; i++) {
        if (T[i] == 'S') {
            if (Dir == 0) y++;
            else if (Dir == 1) x++;
            else if (Dir == 2) y--;
            else x--;
        }
        else {
            Dir++;
            Dir %= 4;
        }
    }

    cout << x << ' ' << y << endl;
    return 0;
}

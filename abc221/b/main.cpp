#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;

    if (S == T) {
        cout << "Yes" << endl;
        return 0;
    }

    bool ans = false;
    string temp;
    int i;
    for (i = 1; i < S.length(); i++) {
        temp = S;
        swap(temp[i], temp[i - 1]);
        if (temp == T) {
            ans = true;
            break;
        }
    }

    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N;
    cin >> S;

    int l;
    int i, j;
    for (i = 1; i < N; i++) {
        l = 0;
        j = 0;
        while (j + i < N) {
            if (S[j] == S[j + i])
                break;

            l++;
            j++;
        }

        cout << l << endl;
    }
    
    return 0;
}

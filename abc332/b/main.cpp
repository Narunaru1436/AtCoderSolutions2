#include <bits/stdc++.h>
using namespace std;

int main() {
    int K, G, M;
    cin >> K >> G >> M;

    int curG = 0;
    int curM = 0;

    int i;
    for (i = 0; i < K; i++) {
        if (curG == G) {
            curG = 0;
        }
        else if (curM == 0) {
            curM = M;
        }
        else {
            while (curG < G && curM != 0) {
                curG += 1;
                curM -= 1;
            }
        }
    }

    cout << curG << " " << curM << endl;
    return 0;
}

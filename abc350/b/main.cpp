#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;

    vector<bool> X(N, true);
    int i;
    int nIndex;
    for (i = 0; i < Q; i++) {
        cin >> nIndex;
        X[nIndex - 1] = !X[nIndex - 1]; // ここスマート
        
    }

    int Count = 0;
    for (i = 0; i < N; i++) {
        if (X[i] == true) Count++;
    }

    cout << Count << endl;
}

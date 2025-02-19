#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> A;
    int n;

    while (true) {
        cin >> n;
        A.push_back(n);

        if (n == 0)
            break;
    }

    int i; 
    for (i = A.size() - 1; i >= 0; i--) {
        cout << A[i] << endl;
    }

    return 0;
}

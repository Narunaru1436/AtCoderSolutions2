#include <bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    cin >> Q;

    vector<int> A;
    int i;
    for (i = 0; i < 100; i++) A.push_back(0);


    vector<pair<int, int>> query;
    int n;
    int x;
    for (i = 0; i < Q; i++) {
        x = 0;
        cin >> n;
        if (n == 1) {
            cin >> x;
        }

        query.push_back({ n, x });
    }

    for (i = 0; i < Q; i++) {
        n = query[i].first;
        x = query[i].second;

        if (n == 1) {
            A.push_back(x);
        }
        else {
            cout << A[A.size() - 1] << endl;
            A.pop_back();
        }
    }
    
    return 0;
}

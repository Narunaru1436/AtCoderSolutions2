#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    
    vector<string> X;
    string temp;
    int i;
    for (i = 0; i < S.length(); i++) {
        temp = S.substr(i) + S.substr(0, i);
        X.push_back(temp);
    }

    sort(X.begin(), X.end());

    cout << X[0] << endl;
    cout << X[X.size() - 1] << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    
    vector<int> Table(26, 0);
    int i;
    size_t nMax = S.length();
    for (i = 0; i < nMax; i++) {
        Table[S[i] - 'a']++;
    }


    auto iterator = max_element(Table.begin(), Table.end());
    char c = distance(Table.begin(), iterator) + 'a';

    cout << c << endl;
    return 0;
}

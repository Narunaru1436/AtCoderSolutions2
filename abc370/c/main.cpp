#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    vector<string> x;
    int n = s.size();
    int i;
    while (s != t) {
        string best = "";
        for (i = 0; i < n; i++) {
            if (s[i] != t[i]) {
                string ns = s;
                ns[i] = t[i];
                if (best == "") best = ns;
                else best = min(ns, best);
            }
        }
        s = best;
        x.push_back(best);
    }

    cout << x.size() << endl;
    for (string si : x) cout << si << endl;
    return 0;
}

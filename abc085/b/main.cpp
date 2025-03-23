#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    set<int> st;
    int d;
    int i;
    for (i = 0; i < N; i++) {
        cin >> d;
        st.insert(d);
    }

    cout << st.size() << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, long long>> A;
    long long x;
    int i;
    for (i = 0; i < N; i++) {
        cin >> x;
        A.push_back({ i + 1, x });
    }

    sort(A.begin(), A.end(), [](const auto& a, const auto& b) {
        return a.second < b.second;
        });

    cout << A[A.size() - 2].first << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int N;
    cin >> N;
    vector<int> A(N);
    int i;
    for (i = 0; i < N; i++) {
        cin >> A[i];
    }

    vector<int> Cuts;
    Cuts.push_back(90);

    int CurrentAngle = 90;
    for (i = 0; i < N; i++) {
        CurrentAngle = (CurrentAngle + A[i]) % 360;
        Cuts.push_back(CurrentAngle);
    }

    sort(Cuts.begin(), Cuts.end());

    int ans = 0;
    for (i = 1; i < Cuts.size(); i++) {
        ans = max(ans, Cuts[i] - Cuts[i - 1]);
    }

    ans = max(ans, (360 - Cuts.back()) + Cuts.front());

    cout << ans << endl;
    return 0;
}

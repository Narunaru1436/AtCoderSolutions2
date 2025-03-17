#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> A(N);
    int i;
    for (i = 0; i < N; i++) cin >> A[i];
    
    int j = 0;
    long long ans = 0;
    for (i = 0; i < N; i++) {
        while (j < N && A[j] * 2 <= A[i]) {
            j++;
        }

        ans += j;
    }

    cout << ans << endl;
    return 0;
}

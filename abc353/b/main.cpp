#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> A(N);
    for (auto& x : A) cin >> x;

    int i = 0;
    int Seats;
    int Count = 0;
    while (i < N) {
        
        Seats = 0;
        while (K - Seats >= A[i]) {
            Seats += A[i];
            i++;

            if (i == N)
                break;
        }

        Count++;

        if (i == N)
            break;
    }

    cout << Count << endl;
}

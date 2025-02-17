#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int nMax = 2 * N;

    vector <int> A;
    A.resize(nMax);

    int i, j;
    for (i = 0; i < 2 * N; i++) {
        cin >> A[i];
    }

    int nCur;
    int nCount = 0;
    for (i = 0; i < N; i++) {
        nCur = i + 1;
        for (j = 0; j < nMax; j++) {
            if (j == nMax - 2)
                break;

            if (A[j] == nCur && A[j + 1] != nCur && A[j + 2] == nCur) {
                nCount++;
                break;
            }
        }
    }

    cout << nCount << endl;
    return 0;
}
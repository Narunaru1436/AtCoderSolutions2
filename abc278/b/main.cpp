#include <bits/stdc++.h>
using namespace std;

// 入れ替えて成立するかどうか判別する関数
bool SubSolution278B(int H, int M)
{
    int A = H / 10;
    int B = H % 10;
    int C = M / 10;
    int D = M % 10;

    int NewH = A * 10 + C;
    int NewM = B * 10 + D;

    return ((0 <= NewH && NewH <= 23) && (0 <= NewM && NewM <= 59));
}

int main()
{
    int H, M;
    cin >> H >> M;

    while (true) {
        if (M > 59) {
            H++;
            if (H > 23) H = 0;
            M = 0;
        }

        // 入れ替える
        if (SubSolution278B(H, M)) {
            cout << H << " " << M << endl;
            return 0;
        }

        M++;
    }
}

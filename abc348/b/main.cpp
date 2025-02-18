#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> Points;
    int i, j;
    int x, y;
    for (i = 0; i < N; i++) {
        cin >> x >> y;
        Points.push_back({ x, y });
        //auto p = Points[i];
        //p.first = x;
        //p.second = y;
    }

    double dMaxLength;
    double dCurLength;
    int nIndex;
    for (i = 0; i < N; i++) {
        auto p1 = Points[i];    
        for (j = 0; j < N; j++) {
            auto p2 = Points[j];
            if (j == 0) {
                dMaxLength = sqrt((pow(p1.first - p2.first, 2) + pow(p1.second - p2.second, 2)));
                nIndex = j;
            }
            else {
                dCurLength = sqrt((pow(p1.first - p2.first, 2) + pow(p1.second - p2.second, 2)));
                if (dCurLength > dMaxLength) {
                    dMaxLength = dCurLength;
                    nIndex = j;
                }
            }
        }
        
        nIndex++;
        cout << nIndex << endl;
    }
}
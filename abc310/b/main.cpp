#include <bits/stdc++.h>
#include "unordered_set"
using namespace std;

// vec2がvec1にない要素を1以上持っているかどうか
bool SubSolution310A(vector<int> vec1, vector<int> vec2)
{
    int i;
    int n;
    for (i = 0; i < vec1.size(); i++) {
        n = vec1[i];
        if (find(vec2.begin(), vec2.end(), n) == vec2.end()) return true;
    }

    return false;
}

// vec2がvec1を内包しているかどうか
bool SubSolution310B(vector<int> vec1, vector<int> vec2)
{
    unordered_set<int> elements(vec2.begin(), vec2.end());

    for (int n : vec1) {
        if (elements.count(n) == 0) {
            return false;
        }
    }

    return true;
}

// あとで解説読む

int main()
{
    int N, M;
    cin >> N >> M;

    // 以下の条件を両方満たすi, jがあるならYes
    // ①Pi > Pj or (Pi == Pj && j番目の商品がi番目の商品にない機能を1つ以上持つ)
    // ②j番目の商品がi番目の商品が持つ機能を全て持つ

    vector<int> P(N);
    vector<int> C(N);
    vector<vector<int>> F(N, vector<int>(N));

    int i, j;
    for (i = 0; i < N; i++) {
        cin >> P[i] >> C[i];
        F[i].resize(C[i]);
        for (j = 0; j < C[i]; j++) {
            cin >> F[i][j];
        }
    }

    string ans = "No";
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (i == j)
                continue;
            if (P[i] > P[j] || (P[i] == P[j] && SubSolution310A(F[i], F[j]))) {
                if (SubSolution310B(F[i], F[j])) {
                    ans = "Yes";
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}


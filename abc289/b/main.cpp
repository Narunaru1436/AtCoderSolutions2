#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(M + 1);
    int i, j;
    for (i = 1; i <= M; i++) cin >> A[i];

    int temp;
    i = 1;
    vector<int> ans;
    while (i <= N) {
        // iがAの中にあれば、連続が途絶えるまでカウントしてリバースプッシュ
        // iがAの中になければそのままプッシュ

        temp = i;
        while (find(A.begin() + 1, A.end(), i) != A.end() && i <= N) {
            i++;
        }
       
        for (j = i; j >= temp; j--) {
            ans.push_back(j);
        }

        i++;
    }

    for (i = 0; i < N; i++) cout << ans[i] << " ";
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<pair<int, int>> A(N); // {美食度, 人の番号}
    for (int i = 0; i < N; i++) {
        cin >> A[i].first;
        A[i].second = i + 1; // 1-based index
    }
    sort(A.begin(), A.end()); // 美食度の小さい順にソート
    
    vector<int> B(M);
    for (int j = 0; j < M; j++) {
        cin >> B[j];
    }

    set<int> available_people; // 食べられる可能性のある人の番号を管理
    int person_index = 0; // ソート済み A の走査用
    
    vector<int> result(M, -1);
    
    for (int j = 0; j < M; j++) {
        while (person_index < N && A[person_index].first <= B[j]) {
            available_people.insert(A[person_index].second);
            person_index++;
        }
        
        if (!available_people.empty()) {
            int chosen = *available_people.begin();
            result[j] = chosen;
            available_people.erase(chosen);
        }
    }

    for (int ans : result) {
        cout << ans << "\n";
    }
}

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<pair<int, int>> people(N);
    for (int i = 0; i < N; i++) {
        cin >> people[i].first;
        people[i].second = i + 1; // 人の番号を記録
    }

    vector<int> sushi(M);
    for (int i = 0; i < M; i++) {
        cin >> sushi[i];
    }

    // 美食度の小さい順にソート
    sort(people.begin(), people.end());

    int index = 0; // 次にチェックする人のインデックス
    for (int j = 0; j < M; j++) {
        while (index < N && people[index].first < sushi[j]) {
            index++; // 食べられる人を探す
        }
        if (index < N) {
            cout << people[index].second << endl;
            index++; // この人はもう寿司を取ったのでスキップ
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}

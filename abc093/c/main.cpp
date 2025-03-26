#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    // A, B, C を配列に格納してソート
    int arr[3] = {A, B, C};
    sort(arr, arr + 3);

    int min_val = arr[0], mid_val = arr[1], max_val = arr[2];

    // 偶奇がそろっているか確認
    bool all_even = (min_val % 2 == mid_val % 2) && (mid_val % 2 == max_val % 2);
    
    int steps = 0;

    if (!all_even) {
        // 奇数と偶数が混在 → 最小値を +2 して揃える
        min_val += 2;
        steps++;
    }

    // 目標値 = max_val に揃える
    int diff1 = max_val - min_val;
    int diff2 = max_val - mid_val;

    // 2回の操作で +2 ずつできるので、回数は (差の合計) / 2
    steps += (diff1 + diff2) / 2;

    cout << steps << endl;
    return 0;
}

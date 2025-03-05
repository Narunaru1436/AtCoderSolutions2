#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

void select_students(int N, int X, int Y, int Z, vector<int>& A, vector<int>& B) {
    vector<pii> math_sorted, english_sorted, total_sorted;
    for (int i = 0; i < N; i++) {
        math_sorted.emplace_back(A[i], i + 1);
        english_sorted.emplace_back(B[i], i + 1);
        total_sorted.emplace_back(A[i] + B[i], i + 1);
    }

    // 重要→値で比較して同じ値の場合はインデックスが小さいほうを採用する場合の比較関数
    auto cmp = [](const pii& a, const pii& b) {
        if (a.first != b.first) return a.first > b.first;
        return a.second < b.second;
    };

    sort(math_sorted.begin(), math_sorted.end(), cmp);
    set<int> passed;
    for (int i = 0; i < X; i++) passed.insert(math_sorted[i].second);

    vector<pii> remaining;
    for (const auto& p : english_sorted) {
        if (!passed.count(p.second)) remaining.push_back(p);
    }

    sort(remaining.begin(), remaining.end(), cmp);
    for (int i = 0; i < Y && i < remaining.size(); i++) passed.insert(remaining[i].second);

    remaining.clear();
    for (const auto& p : total_sorted) {
        if (!passed.count(p.second)) remaining.push_back(p);
    }

    sort(remaining.begin(), remaining.end(), cmp);
    for (int i = 0; i < Z && i < remaining.size(); i++) passed.insert(remaining[i].second);

    vector<int> result(passed.begin(), passed.end());
    sort(result.begin(), result.end());
    for (int student : result) {
        cout << student << endl;
    }
}

int main() {
    int N, X, Y, Z;
    cin >> N >> X >> Y >> Z;
    vector<int> A(N), B(N);
    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < N; i++) cin >> B[i];

    select_students(N, X, Y, Z, A, B);

    return 0;
}
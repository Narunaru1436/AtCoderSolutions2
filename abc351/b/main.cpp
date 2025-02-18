#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<vector<char>> A(N, vector<char>(N));
    vector<vector<char>> B(N, vector<char>(N));

    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            cin >> B[i][j];
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (A[i][j] != B[i][j]) {
                cout << i + 1 << " " << j + 1 << endl;
                break;
            }
        }
    }
}

// 解答例
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;

  // 2次元配列を作らなくてもいい
  vector<string> A(N), B(N);
  for (auto& s : A) cin >> s;
  for (auto& s : B) cin >> s;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (A[i][j] != B[i][j]) {
        cout << i + 1 << " " << j + 1 << endl;
        return 0;
      }
    }
  }
}

#include <bits/stdc++.h>
using namespace std;

void dfs(int v, vector<int>& A, vector<bool>& visited, int& Count)
{
    if (visited[v])
        return;

    visited[v] = true;
    Count++;

    dfs(A[v], A, visited, Count);
}

int main()
{
    int N, X;
    cin >> N >> X;

    vector<int> A(N + 1);
    int i;
    for (i = 1; i <= N; i++) cin >> A[i];

    vector<bool> visited(N + 1, false);
    int Count = 0;
    
    dfs(X, A, visited, Count);

    cout << Count << endl;
}
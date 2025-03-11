#include <bits/stdc++.h>
using namespace std;

bool SubSolution333(char x, char y)
{
    if (x < y) swap(x, y);
    int dist = x - y;
    return x - y == 1 || x - y == 4;
}

int main()
{
    char a, b, c, d;
    cin >> a >> b >> c >> d;

    if (SubSolution333(a, b) == SubSolution333(c, d)) cout << "Yes" << endl;
    else cout << "No" << endl;
}
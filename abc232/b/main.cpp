#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;

  int k1 = t[0];
  int k2 = s[0];

  int k = (t[0] - s[0] + 26) % 26;
  string s2 = s;
  for (int i = 0; i < (int)s.size(); i++) {
      int x = (s2[i] - 'a');
      s2[i] = ((s2[i] - 'a') + k) % 26 + 'a'; // aからの距離 + K でs[i]からKずらしたアルファベットが得られる
  }
  
  if (s2 == t) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}

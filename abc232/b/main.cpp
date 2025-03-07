#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;

    // →char C = `a` + n - 1; n番目の小文字アルファベットc
    int n1 = S[0] - 'a';
    int n2 = T[0] - 'a';
    int diff = (n2 - n1 + 26) % 26;

    bool ans = true;
    char c;
    int i;
    for (i = 1; i < S.length(); i++) {
        c = 'a' + (S[i] + diff) % 26;
        if (c != T[i]) {
            ans = false;
            break;
        }
    }
    
    cout << (ans ? "Yes" : "No") << endl;

    /*
      string s, t;
  cin >> s >> t;
  
  int k = (t[0]-s[0]+26) % 26;
  string s2 = s;
  for(int i = 0; i < (int)s.size(); i++){
    s2[i] = ((s2[i]-'a')+k)%26 + 'a';
  }
  if(s2 == t) cout << "Yes" << endl;
  else cout << "No" << endl;
  
  return 0
    */
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

bool SubFunction360(string str1, string str2, int w)
{
    int i = 0;
    int j = 0;
    int nLength = str1.length();
    
    string strTemp;
    string str3;

    for (i = 0; i < w; i++) {
        str3 = "";
        j = 0;
        while (j < nLength) { 
            strTemp = str1.substr(j, w);

            if (strTemp.length() <= i)
                break;

            str3 += strTemp[i];
            j += w;
        }

        if (str2 == str3) {
            return true;
        }
    }

    return false;

}

int main() 
{
    string S, T;
    cin >> S >> T;

    int i, j;
    int nLength = S.length();
    string strAnswer = "No";

    for (i = 1; i < nLength; i++) {
        if (SubFunction360(S, T, i)) {
            strAnswer = "Yes";
            break;
        }

    }

    cout << strAnswer << endl;
    return 0;
}
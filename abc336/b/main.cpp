#include <bits/stdc++.h>
using namespace std;

int main() {
    // bitset関数を用いたほうがいいかもしれないが、あえて自前で変換処理を作成する

    int d; // 10進数
    cin >> d;

    // 10進数→2進数
    string binary = "";
    if (d == 0) {
        binary = "0";
    }
    else {
        while (d > 0) {
            binary = to_string(d % 2) + binary;
            d /= 2;
        }
    }

    int i;
    int Count = 0;
    for (i = binary.size() - 1; i >= 0; i--) {
        if (binary[i] == '1')
            break;
        
        Count++;
    }

    cout << Count << endl;
    return 0;
}

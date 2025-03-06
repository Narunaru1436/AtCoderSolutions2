#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    std::cin >> N;
    
    std::vector<std::string> s(N), t(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> s[i] >> t[i];
    }

    for (int i = 0; i < N; ++i) {
        bool can_give_a_nickname = false;

        for (const std::string& S : {s[i], t[i]}) {
            bool unique = true;

            for (int j = 0; j < N; ++j) {
                if (i != j && (S == s[j] || S == t[j])) {
                    unique = false;
                    break;
                }
            }

            if (unique) {
                can_give_a_nickname = true;
                break;
            }
        }

        if (!can_give_a_nickname) {
            std::cout << "No" << std::endl;
            return 0;
        }
    }

    std::cout << "Yes" << std::endl;
    return 0;
}

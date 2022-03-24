#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    char max_char {};
    for (auto c : s) {
        if (c > max_char)
            max_char = c;
    }

    for (auto c : s) {
        if (c == max_char)
            cout << max_char;
    }


    return 0;
}
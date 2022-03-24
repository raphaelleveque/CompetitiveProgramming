#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;

    for (int i{}; i < t; i++) {
        for (int j{}; j < s.length() - 1; j++) {
            if (s[j] == 'B' && s[j+1] == 'G') {
                swap(s[j], s[j + 1]);
                j++;
            }
        }
    }
    cout << s << endl;

    return 0;
}

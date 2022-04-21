#include <bits/stdc++.h>
using namespace std;

int main() {
    int tests;
    cin >> tests;

    while (tests--) {
        int n;
        cin >> n;
        unordered_map<int, int> a;
        bool printed = false;
        for (int i = 0; i < n; i++) {
            int tmp;
            cin >> tmp;
            a[tmp]++;
            if (a[tmp] >= 3 && !printed) {
                cout << tmp << endl;
                printed = true;
            }
        }
        if (printed == false) {
            cout << -1 << endl;
        }
    }

    return 0;
}
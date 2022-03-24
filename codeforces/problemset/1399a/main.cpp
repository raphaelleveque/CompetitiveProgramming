#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    set<int> a;

    for (int i = 0; i < t; i++) {
        a.clear();
        int n{};
        cin >> n;
        int nums_left {};

        for (int j = 0; j < n; j++) {
            int tmp;
            cin >> tmp;
            a.insert(tmp);
        }
        
        auto it = a.begin();
        auto it2 = ++a.begin();
        while (it2 != a.end()) {
            if (abs(*it2 - *it) <= 1) {
                nums_left++;
            }
            it++;
            it2++;
        }
        cout << (a.size() - nums_left == 1 ? "YES\n" : "NO\n");
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int tests;
    cin >> tests;

    while (tests--) {
        int n;
        cin >> n;
        vector<int> a(n);
        bool even_seq{true}, odd_seq{true};
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i % 2 == 0 && even_seq) {
                if (a[i] % 2 != a[0] % 2)
                    even_seq = false;
            } else if (odd_seq){
                if (a[i] % 2 != a[1] % 2)
                    odd_seq = false;
            }
        }
        if (!even_seq || !odd_seq)
            cout << "NO" << endl;
        else 
            cout << "YES" << endl;
    }

    return 0;
}
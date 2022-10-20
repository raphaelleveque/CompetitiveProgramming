#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int perm;
    for (int i = 0; i < n; i++) {
        cin >> perm;
        if (perm == 2)
            cout << 2 << " " << 1 << endl;
        else if (perm == 3)
            cout << -1 << endl;
        else {
            for (int j = perm, k = 1; j > 1; j -= 2, k+=2) {
                if (perm % 2 == 1 && k == perm - 2) {
                    cout << "1 2 3 ";
                } else {
                    if (j - 1 == k || j == k + 1) {
                        cout << j << " " << j - 1 << " ";
                    } else {
                        cout << j - 1 << " " << j << " ";
                    }
                }
            }
            cout << endl;
        }
    }
}
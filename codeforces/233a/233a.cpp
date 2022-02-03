#include <bits/stdc++.h>
using namespace std;

int main() {
    int permutation_size;
    cin >> permutation_size;

    if (permutation_size % 2 == 1) {
        cout << -1 << endl;
        return 0;
    }

    for (int i {1}; i <= permutation_size; i++) {
        if (i % 2 == 1)
            cout << i + 1 << " ";
        else 
            cout << i - 1 << " ";
    }

    return 0;
}
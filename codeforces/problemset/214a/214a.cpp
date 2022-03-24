#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int count {};

    int a {0}, b;
    while (true) {
        int a2 = pow(a, 2);
        int b = n - a2;
        if (b < 0)
            break;
        int b2 = pow(b, 2);
        if (a + b2 == m)
            count++; 
        a++;
    }

    cout << count << endl;

    return 0;
}
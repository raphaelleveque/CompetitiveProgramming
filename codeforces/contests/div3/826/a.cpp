#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string a, b;
    char asize, bsize;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        asize = a[a.size() - 1];
        bsize = b[b.size() - 1];
        
        if (asize == bsize) {
            if (a.size() == b.size()) {
                cout << "=" << endl;
            } else if (asize  == 'S') {
                cout << (a.size() > b.size() ? "<" : ">") << endl;
            } else if (asize == 'M'){
                cout << "=" << endl;
            } else {
                cout << (a.size() < b.size() ? "<" : ">") << endl;
            }
        } else if (asize > bsize) {
            cout << "<" << endl;
        } else {
            cout << ">" << endl;
        }
    }
}
#include <bits/stdc++.h>
using namespace std;

int main() {    
    int size;
    cin >> size;
    
    vector<int> a(size);
    
    for(int i = 0; i < size; i++) {
        cin >> a[i];
    }
    
    reverse(a.begin(), a.end());
    
    for(int x : a)
        cout << x << " ";
    
    
    return 0;
}


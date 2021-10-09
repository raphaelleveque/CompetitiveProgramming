#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    string s;
    cin >> s;
    stringstream ss(s);
    int a;
    while (ss >> a){
        v.push_back(a);
        ss.ignore();
    }

    for(int x : v)
        cout << x << endl;
}
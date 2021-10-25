#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    stringstream ss;
    vector<int> ar;
    ss << s;
    int x;

    while(ss >> x)
        ar.push_back(x);
    
    sort(ar.begin(), ar.end());

    for(int i = 0; i < ar.size(); i++){
        cout << ar[i];
        if(i != ar.size() - 1)
            cout << "+";
    }
}
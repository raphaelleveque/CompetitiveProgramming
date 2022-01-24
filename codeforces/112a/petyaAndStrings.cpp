#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    transform( s1.begin(), s1.end(), s1.begin(), ptr_fun <int, int> ( tolower ) );
    transform( s2.begin(), s2.end(), s2.begin(), ptr_fun <int, int> ( tolower ) );

    int res = s1.compare(s2);
    if (res == 0) cout << "0" << endl;
    else if (res > 0) cout << "1" << endl;
    else cout << "-1" << endl;
}
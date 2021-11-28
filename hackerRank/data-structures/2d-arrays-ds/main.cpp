#include <bits/stdc++.h>
using namespace std;

int main() {
    vector< vector<int> >  m ( 6, vector<int>(6)  ); 
    
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> m[i][j];
        }
    }
    
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int tmp;
            tmp = m[i][j] + m[i][j+1] + m[i][j+2] + m[i+1][j+1]
            + m[i+2][j] + m[i+2][j+1] + m[i+2][j+2];
            if (i == 0 && j == 0)
                sum = tmp;
            else if (tmp > sum)
                sum = tmp;
        }
    }
    cout << sum << endl;
    
    
    return 0;
}


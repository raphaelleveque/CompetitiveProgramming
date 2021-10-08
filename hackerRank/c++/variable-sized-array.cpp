#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<vector<int>> m(n, vector<int>());
    
    for (int i=0; i<n; i++) {
        int tam;
        cin >> tam;
        m[i].resize(tam);
        for (int j=0; j<tam; j++) {
            cin >> m[i][j];
        }
    }
    for (int i = 0; i < k; i++) {
        int q1, q2;
        cin >> q1 >> q2;
        cout << m[q1][q2] << endl;
    }
    
}


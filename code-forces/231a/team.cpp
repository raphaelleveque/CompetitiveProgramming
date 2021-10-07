#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int nSolves = 0;
    for (int i = 0; i < n; i++){
        int sum = 0;
        for (int j = 0; j < 3; j++){
            int tmp;
            cin >> tmp;
            if(tmp == 1)
                sum += 1;
        } 
        if(sum >= 2)
            nSolves++;
    }
    cout << nSolves;


    return 0;
}
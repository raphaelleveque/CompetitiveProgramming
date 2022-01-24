#include <bits/stdc++.h>
using namespace std;

typedef struct{
    int row, col;
} coord_t;

int main(){
    coord_t coord;
    vector<vector<int>> m(5, vector<int>(5));
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> m[i][j];
            if(m[i][j] == 1){
                coord.row = i+1;
                coord.col = j+1;
            }
        }
    }
    int moves = 0;
    while(coord.row != 3 || coord.col != 3){
        if(coord.row < 3) {
            coord.row++;
            moves++;
        }
        else if(coord.row > 3){
            coord.row--;
            moves++;
        }

        if(coord.col < 3) {
            coord.col++;
            moves++;
        }
        else if(coord.col > 3){
            coord.col--;
            moves++;
        }
    }
    cout << moves;
}
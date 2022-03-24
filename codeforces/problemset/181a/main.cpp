#include <bits/stdc++.h>
using namespace std;

int main() {
    int lines, columns;
    cin >> lines >> columns;
    vector<vector<char>> map (lines, vector<char>(columns));

    //       line, column
    vector<pair<int, int>> coordinates;

    for (int i {}; i < lines; i++) {
        for (int j {}; j < columns; j++) {
            cin >> map.at(i).at(j);
            if (map.at(i).at(j) == '*') {
                coordinates.push_back(make_pair(i, j));
            }
        }
    }

    int line {coordinates.at(0).first}, column {coordinates.at(0).second};
    int flag_line {}, flag_column {};
    
    for (int i {1}; i < coordinates.size(); i++) {
        if (line == coordinates.at(i).first && !flag_line) {
            line = coordinates.at(i % 2 + 1).first;
            flag_line = 1;
        }
        if (column == coordinates.at(i).second && !flag_column) {
            column = coordinates.at(i % 2 + 1).second;
            flag_column = 1;
        }
    }

    cout << line + 1 << " " << column + 1 << endl;


    return 0;
}
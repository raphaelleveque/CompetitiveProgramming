#include <bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cin >> size;

    int count {};
    vector<vector<int>> m(size, vector<int> (size));
    for (int row {}; row < size; row++) {
        for (int column {}; column < size; column++) {
            cin >> m.at(row).at(column);
            if (row == column)
                count += m.at(row).at(column);
            else if ((size - row - 1) == column)
                count += m.at(row).at(column);
            else if (row == ((size - 1) / 2))
                count += m.at(row).at(column);
            else if (column == ((size - 1) / 2))
                count += m.at(row).at(column);
        }
    }
    cout << count;

    return 0;
}   
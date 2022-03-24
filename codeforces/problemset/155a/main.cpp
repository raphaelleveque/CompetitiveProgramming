#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    set<int> points;
    int awesome {};
    for (int i {}; i < n; i++) {
        int tmp;
        cin >> tmp;
        if (points.find(tmp) != points.end())
            continue;
        
        points.insert(tmp);
        if (i > 0) {
            auto it = points.find(tmp);
            if (it == points.begin() || it == --points.end())
                awesome++;
        }
    }
    cout << awesome << endl;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> time(n);
    for (int i = 0; i < n; i++) {
        cin >> time[i].first >> time[i].second;
    }
    sort(time.begin(), time.end());
    int right = time[0].second;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (i != 0 && time[i].first < right) continue;
        for (int j = i + 1; j < n; j++) {
            if (time[j].second < time[i].second) {
                i = j;
            }
        }
        ans++;
        right = time[i].second;
    }
    cout << ans << endl;
}
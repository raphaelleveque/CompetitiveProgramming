#include <bits/stdc++.h>
using namespace std;
 
int main () {
    int n_participants, kth_place;
    cin >> n_participants >> kth_place;
    vector<int> scores(n_participants);

    int count {};
    for (int i {}; i < n_participants; i++) {
        cin >> scores.at(i);
        if (scores.at(i) > 0 && i < kth_place)
            count = i + 1;
        else if (scores.at(i) > 0 && scores.at(i) == scores.at(kth_place - 1))
            count = i + 1;
    }

    cout << count << endl;
 
    return 0;
}
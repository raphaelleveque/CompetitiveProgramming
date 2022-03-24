#include <bits/stdc++.h>
using namespace std;
 
int main () {
    int n_participants, kth_place;
    cin >> n_participants >> kth_place;
    vector<int> scores(n_participants);
    for (int i {}; i < n_participants; i++) {
        cin >> scores.at(i);
    }
 
 
    int count {kth_place};
    int i {kth_place};
    while (scores.at(i - 1) == scores.at(i) && scores.at(i -  1) != 0) {
        count = ++i;
    }
 
    i = kth_place - 1;
    while (i >= 0 && scores.at(i) == 0) {
        count = --i + 1;
    }
 
    cout << count;
 
    return 0;
}
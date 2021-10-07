#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> scores(n);
    for (int i = 0; i < n; i++)
        cin >> scores[i];
    int min = scores[k-1];
    int counter = 0;
    for (int i = 0; i < n; ++i) {
        if (scores[i] >= min && scores[i] > 0)
            counter++;
    }
    cout << counter;
}

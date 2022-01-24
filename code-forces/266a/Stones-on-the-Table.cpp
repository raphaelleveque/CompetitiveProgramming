#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;
    vector<char> ch(n);
    cin >> ch[0];
    for (int i = 1; i < n; i++){
        cin >> ch[i];
        if(ch[i] == ch[i - 1])
            count++;
    }
    cout << count;
}
#include <iostream>
using namespace std;

int main() {
    int min, max, n;
    int num, awesome {};
    cin >> n >> num;
    min = num;
    max = num;

    for (int i = 1; i < n; i++) {
        cin >> num;
        if (num > max) {
            max = num;
            awesome++;
        }else if (num < min) {
            min = num;
            awesome++;
        }
    }
    cout << awesome << endl;
}

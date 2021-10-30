#include <iostream>
using namespace std;

int main() {
    int limak, bob;
    cin >> limak >> bob;

    int yrs = 0;
    while (limak <= bob) {
        limak *= 3;
        bob *= 2;
        yrs++;
    }
    cout << yrs;
}
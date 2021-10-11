#include <iostream>
#include <string>
using namespace std;

int main() {
	string s0, s1;
    cin >> s0;
    cin >> s1;
    cout << s0.size() << " " << s1.size() << endl;
    cout << s0 << s1 << endl;
    swap(s0[0], s1[0]);
    cout << s0 << " " << s1;
   
    return 0;
}

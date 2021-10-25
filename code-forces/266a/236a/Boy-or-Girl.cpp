#include <iostream>
using namespace std;

string repeatedChars(string s) {
    for (int i = s.size(); i >= 0; i--) {
        for (int j = i - 1; j >= 0; j--) {
            if (s[i] == s[j])
                s.erase(s.begin() + i);
        }
    }
    return s;
}

int main() {
    string s;
    getline(cin, s);
    s = repeatedChars(s);
    cout << (s.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");
}
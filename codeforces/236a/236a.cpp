#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	vector<bool> map(26, false);
	int counter {};
	for (int i {}; i < s.length(); i++) {
		if (map[s[i] - 'a'] == false) {
			map[s[i] - 'a'] = true;
			counter++;
		}	
	}

	if (counter % 2 == 0)
		cout << "CHAT WITH HER!" << endl;
	else
		cout << "IGNORE HIM!" << endl;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	int count {};
	unordered_map <int, int> hash;
	for (int i {}; i < 4; i++) {
		int tmp;
		cin >> tmp;
		if (hash.find(tmp) != hash.end())
			count++;
		hash[tmp] = i;
	}
	cout << count << endl;
}

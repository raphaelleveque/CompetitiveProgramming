#include <bits/stdc++.h>
using namespace std;

int main() {
	int nProblems;
	cin >> nProblems;

	int result {};

	for (int i {}; i < nProblems; i++) {
		int tmpVotes {};
		for (int j {}; j < 3; j++) {
			int tmpNum;
			cin >> tmpNum;
			tmpVotes += tmpNum;
		}
		if (tmpVotes >= 2)
			result++;
	}
	cout << result << endl;

	return 0;
}

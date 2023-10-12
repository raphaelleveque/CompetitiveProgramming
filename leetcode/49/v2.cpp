#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<pair<string, string>> sorted;
        for (auto s : strs) {
            string tmp(s);
            sort(s.begin(), s.end());
            sorted.push_back({s, tmp});
        }

        sort(sorted.begin(), sorted.end());

        vector<vector<string>> ans;
        auto it = sorted.begin();
        while (it != sorted.end()) {
            vector<string> tmpAns;
            tmpAns.push_back(it->second);
            while (next(it) != sorted.end() && next(it)->first == it->first) {
                tmpAns.push_back(next(it)->second);
                it++;
            }
            ans.push_back(tmpAns);
            it++;
        }

        return ans;
    }
};

int main() {
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    Solution s;
    s.groupAnagrams(strs);
}
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<unordered_map<char, int>> allMaps;
        for (auto word : strs) {
            unordered_map<char, int> map;
            for (auto ch : word) {
                map[ch]++;
            }
            allMaps.push_back(map);
        }

        vector<vector<string>> ans;
        vector<string>::iterator it = strs.begin();
        while (it != strs.end()) {
            vector<string> group;
            group.push_back(*it);
            for (auto tmp = it + 1; tmp != strs.end(); ) {
                int i = it - strs.begin();
                int j = tmp - strs.begin();
                if (allMaps[i] == allMaps[j]) {
                    group.push_back(*tmp);
                    tmp = strs.erase(tmp);
                    allMaps.erase(allMaps.begin() + j);
                } else {
                    tmp++;
                }
            }
            ans.push_back(group);
            it++;
        }
        return ans;
    }
};

int main() {
    // Exemplo de uso do método groupAnagrams
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    Solution *s = new Solution();
    vector<vector<string>> result = s->groupAnagrams(strs);

    // Imprime o resultado
    for (const auto& group : result) {
        for (const string& word : group) {
            cout << word << " ";
        }
        cout << endl;
    }

}
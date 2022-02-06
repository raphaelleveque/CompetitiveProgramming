// The only difference between v1 and v2 is that v2 has a foreach

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        vector<string> ruleKeyVector {"type", "color", "name"};
        int whichRuleKey {};
        for (int i {}; i < ruleKeyVector.size(); i++)
            if (ruleKey == ruleKeyVector.at(i)) {
                whichRuleKey = i;
                break;
            }
        int count {};

        // This is a vector of vector of strings, so imagine a matrix
        // Each line contains several strings
        // This foreach will loop through each line, and not each column
        // So it doesn't loop through the strings,
        // It only loops through the pointers
        for (const auto &item : items) {
            if (ruleValue == item.at(whichRuleKey))
                count++;
        }
        return count;
    }
};

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        vector<string> ruleKeyVector {"type", "color", "name"};
        int whichRuleKey {};
        
        // To avoid a lot of else if statements, I created a vector and then compared ruleKey with it
        for (int i {}; i < ruleKeyVector.size(); i++) {
            if (ruleKey == ruleKeyVector.at(i)) {
                whichRuleKey = i;
                break;
            }
        }
        
        // Now I only have to loop through the items vector to see how many items match the description 
        int count {};
        for (int i {}; i < items.size(); i++) {
            if (ruleValue == items.at(i).at(whichRuleKey))
                count++;
        }
        return count;
    }
};

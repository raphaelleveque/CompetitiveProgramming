class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        // whichRuleKey is assigned to one of the three options
        // I'm using the ternary operator
        // Is ruleKey equal to "type"? if yes, than whichRuleKey receives 0
        // if not, is ruleKey equal to "color"? if yes, than whichRuleKey receives 1, if not, it receives 2 
        int whichRuleKey = (ruleKey == "type") ? 0 : (ruleKey == "color") ? 1 : 2;
        
        
        // Here I'm using the STL algorithm count_if
        // It will iterate over the items vector
        // For each iteration, the lambda expression will be called by reference
        // The parameter of the lambda expression is an iterator for the vector within the items vector
        // The lambda expression will return true or false, if item.at(whichRuleKey) == ruleValue
        return count_if(items.begin(), items.end(), 
                        [&](const auto &item) {return (item.at(whichRuleKey) == ruleValue);});
    }
};

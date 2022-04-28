class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set<int> map;
        for (auto i : nums)
            map.insert(i);
        
        while (map.find(original) != map.end()) {
            original *= 2;
        }
        return original;
    }
};

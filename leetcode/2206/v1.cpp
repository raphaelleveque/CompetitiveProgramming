class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int, int> frequency;
        for(auto i : nums) {
            frequency[i]++;
        }
        
        // same as:
        // for(auto i : nums) if (i.second % 2 != 0)
        for(auto &[num, freq] : frequency) {
            if (freq % 2 != 0)
                return false;
        }
        return true;
    }
};

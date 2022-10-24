class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> map;
        for(auto i : nums)
            map[i]++;
        for(auto &[key, value] : map)
            if (value == 1)
                return key;
        return 0;
    }
};

class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_set<int> sum;
        for (int i = 0; i < nums.size(); i++) {
            sum.insert(nums[i]);
        }
        
        int to_find1, to_find2;
        int ans = 0;
        for (int j = nums.size() - 2; j >= 1; j--) {
            to_find1 = nums[j] - diff;
            to_find2 = nums[j] + diff;
            
            if (sum.count(to_find1) && sum.count(to_find2))
                ans++;
        }
        
        return ans;
    }
};

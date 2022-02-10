class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        int target_duplicates {}, lesser {};
        
        // I loop through the array and count how many numbers are lesser than the target,
        // and how many times the target appear
        for (auto i : nums) {
            if (i < target)
                lesser++;
            else if (i == target) {
                target_duplicates++;
            }
        }
        
        // If there are n numbers lesser than target, than the starting position of the target is nums[n]
        // Because nums[0] to nums[n - 1] are lesser than target, but nums[n] is the target's position
        for (int i {}; i < target_duplicates; i++) {
            ans.push_back(lesser);
            lesser++;
        }
        return ans;
    }
};

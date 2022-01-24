class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int runningSum {nums[0]};
        for (int i {1}; i < nums.size(); i++) {
            runningSum += nums[i];
            nums[i] = runningSum;
        }
        return nums;
    }
};

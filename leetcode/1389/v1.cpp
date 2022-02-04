class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        // First, I'm creating a vector and reserving its size
        vector<int> target;
        target.reserve(nums.size());
        
        // Then, I'm looping through the target's vector and inserting an element "in the middle" of the vector
        // So, at position target.begin() + index[i], i insert nums[i]
        // Whats after this position will be shifted to the right
        for (int i {}; i < nums.size(); i++) {
            target.insert(target.begin() + index[i], nums[i]);
        }
        return target;
    }
};

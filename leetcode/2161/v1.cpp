class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> left;
        vector<int> middle;
        vector<int> right;
        for (auto i : nums) {
            if (i < pivot)
                left.push_back(i);
            else if (i == pivot)
                middle.push_back(i);
            else
                right.push_back(i);
        }
        left.insert(left.end(), middle.begin(), middle.end());
        left.insert(left.end(), right.begin(), right.end());
        return left;
    }
};

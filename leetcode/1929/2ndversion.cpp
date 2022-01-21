class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int len = nums.size();
        vector<int> res(len * 2);
        copy_n(nums.begin(), len, res.begin());
        copy_n(nums.begin(), len, res.begin() + len);
        return res;
    }
};

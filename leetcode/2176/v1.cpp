class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int sum{};
        for(int i {}; i < nums.size() - 1; i++) {
            for (int j{i + 1}; j < nums.size(); j++) {
                if(nums.at(i) == nums.at(j) && (i * j) % k == 0)
                    sum++;
            }
        }
        return sum;
    }
};

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        // 1st, I create a frequency array, counting sort
        int cnt[501] = {};
        for (int n : nums)
            ++cnt[n];
        // Then, I check to see if all of the elements have an even frequency
        return all_of(begin(cnt), end(cnt), [](int cnt){ return cnt % 2 == 0; });
    }
};

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int goodPairs {};
        // Because the maximum number of nums[i] is 100, we can use countingSort;
        vector<int> frequencies (101);
        for (int i{}; i < nums.size(); i++)
            frequencies[nums[i]]++;
        for(int i {}; i < 101; i++)
            if (frequencies[i] > 1)
                // This formula is the combination by 2, n! / ((n-2)! * 2!)
                goodPairs += (frequencies[i]) * (frequencies[i] - 1) / 2;
        
        return goodPairs;
    }
};

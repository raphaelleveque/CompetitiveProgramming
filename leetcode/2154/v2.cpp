class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        const int max_size = 1001;
        array<int, max_size> freq{};
        
        for (auto i : nums) 
            freq[i]++;
        
        while (original <= 1000 && freq[original])
            original *= 2;
        
        return original;
    }
};

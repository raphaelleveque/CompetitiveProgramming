class Solution {
public:
    int maxProductDifference(vector<int>& nums) {        
        for (int i {}; i < 4; i++) {
            if (i < 2) {
                // Finding the 2 largest numbers:
                // Using the max_element function to find the largest element
                // Then, swapping the largest number with the last number
                // So, the two largest numbers will be at nums[n -1] and nums[n -2]
                // Using iter_swap because i have two iterators to swap, not values
                
                auto max = max_element(nums.begin(), nums.end() - i);
                iter_swap(max, nums.end() - (i + 1));
                
            } else {
                auto min = min_element(nums.begin(), nums.end() - i);
                iter_swap(min, nums.end() - (i + 1));  
            }
        }
        
        return (nums.at(nums.size() - 1) * nums.at(nums.size() - 2)) - 
            (nums.at(nums.size() - 3) * nums.at(nums.size() - 4));
    }
};

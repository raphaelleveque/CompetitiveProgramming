class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        // I will use counting sort with cumulative frequency
        // Because the maximum integer is 100, i can create a vector of 101 elements

        const int max_num {101};
        vector<int> frequency (max_num);
        
        // This forloop counts the frequency that each number appear
        for (int i {}; i < nums.size(); i++) {
            frequency[nums[i]]++;
        }
        
        // This forloop makes the cumulative frequency
        for (int i {1}; i < max_num; i++) {
            frequency[i] += frequency[i - 1];
        }
        
        // This forloop will loop through the original array and wil get the acumulative
        // frequency of that number (not counting that number's frequency)
        vector<int> smaller (nums.size());
        for (int i{}; i < nums.size(); i++) {
            if (nums[i] == 0)
                smaller[i] = 0;
            else
                smaller[i] = frequency[nums[i] - 1];
        }
        return smaller;
    }
};

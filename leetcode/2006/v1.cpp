class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        // First, I create an array that frequency[nums[i]]++, so i can acces the element nums[i] directly
        const int max_num {101};
        vector<int> frequency(max_num);
        for (const auto &num : nums) {
            frequency.at(num)++;
        }
        
        // Now, for each element of the vector, i have to find its pair num[i] + k
        // Because I've created a frequency vector, i just have to access frequency[num[i] + k]
        int pairs {};
        for (const auto &num : nums) {
            if (num + k <= 100)
                pairs += frequency.at(num + k);
        }
        return pairs;
    }
};

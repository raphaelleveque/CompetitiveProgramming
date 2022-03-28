class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        // To maximize the sum, i cannot have a big num and a small num into
        // the same pair
        // So, in order to have the biggest sum, I need to pair the big numbers
        // together, so the smallest one is still big, and
        // the small numbers together, so I don't lose a big number that i could've
        // added to sum
        
        sort(nums.begin(), nums.end());
        int sum{};
        
        for (int i{}; i < nums.size(); i += 2) {
            sum += nums.at(i);
        }
        return sum;
    }
};

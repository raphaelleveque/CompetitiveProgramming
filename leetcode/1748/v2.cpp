class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum{};
        // I will create a hashmap to map the element to its frequency
        // After adding the element, if its frequency == 1, then it's the first
        // time it appears, and I will add it to sum
        // If its sum is two, then it is no longer a unique element, so I remove it
        // from sum
        
        unordered_map<int, int> map;
        for(auto n : nums) {
            map[n]++;
            if (map[n] == 1)
                sum += n;
            else if (map[n] == 2)
                sum -= n;
        }
        return sum;
    }
};

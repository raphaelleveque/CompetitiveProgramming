class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int goodPairs {};
        // Because the maximum number of nums[i] is 100, we can use countingSort;
        vector<int> frequencies (101);
        for (int i{}; i < nums.size(); i++) {
            // Because all the elements in a vector start with 0, no need to initialize them
            // Everytime that a new element is inserted into the frequency counter,
            // and it has appeared at least once before, it means it has at least one more pair
            // If the element was seen 4 times before, it means this new element will make 4 new pairs,
            // because it will pair with each previously seen value
            goodPairs += frequencies[nums[i]];
            frequencies[nums[i]]++;
        }
        
        return goodPairs;
    }
};

// For better explanation, https://www.youtube.com/watch?v=qnCKQQE6wLM

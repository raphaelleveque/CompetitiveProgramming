class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        // BucketSort
        
        const int maxNumAllowed = 10000;
        const int arrSize = 2 * maxNumAllowed + 1;
        // The numbers range from -10k to +10k, so 20k
        vector<int> frequency (arrSize, 0);
        
        // Fill frequency array
        for (auto x : nums)
            frequency[x + maxNumAllowed]++;
         
        
        // Iterating the whole frequency array, to find
        bool shallSum = true;
        int sum {};
        for (int i{}; i < arrSize; i++) {
            while (frequency[i] > 0) {
                if (shallSum) {
                    // The index i doesn't represent the number, it represents
                    // i = num + 10000  ->  num = i - 10000
                    sum += i - maxNumAllowed; 
                    shallSum = false;
                } else {
                    shallSum = true;
                }
                // If i don't decrement, the while will loop forever
                frequency[i]--;
            }
        }
        return sum;
        
        
    }
};

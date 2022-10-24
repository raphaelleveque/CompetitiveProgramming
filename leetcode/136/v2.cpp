class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // Using XOR proprieties: Time = O(n) and Space = O(1)
        
        // a XOR a == 0 -> That means that if we have duplicates
        // and XOR them, then the result will be 0
        
        // a XOR 0 = a -> Knowing that the XOR of all duplicates will be 0, 
        // when we XOR that result with the only unique number, the result
        // will be the unique number
        
        // a XOR b XOR a == (a XOR a) XOR b == b -> That means that we don't
        // have to reorganize the array to do the XOR operation
        
        int result = 0;
        for (auto i : nums)
            result = result ^ i;
        return result;
        
    }
};

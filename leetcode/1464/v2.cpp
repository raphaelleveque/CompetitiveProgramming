class Solution {
public:
    // Difference between swap and exchange functions
    // exchange(a, b) replaces the value of a with b and returns the old value of a.   
    
    int maxProduct(vector<int>& nums) {
        int m1 = 0, m2 = 0;
        for (auto n: nums) {
            // if n is greater than max1, then m1 receives the n value
            // And max2 receives the old value of m1
            if (n > m1)
                m2 = exchange(m1, n);
            
            // If n is not greater than m1, it can be greater than m2
            else
                m2 = max(m2, n);
        }
        return (m1 - 1) * (m2 - 1);
    }
};

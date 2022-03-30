class Solution {
public:
    int maxProduct(vector<int>& nums) {   
        // I have to find the two biggest numbers in the array
        int max1{}, max2{};
        
        for (auto x : nums) {
            if (x > max1) {
                max2 = max1;
                max1 = x;
            } else if (x > max2) {
                max2 = x;
            }
        }
        return (max1 - 1) * (max2 - 1);
    }
};

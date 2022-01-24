class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        const int len = nums.size();
        
        for(int i = n; i < len; i++){
            nums[i] = (nums[i] << 10) | nums[i - n];
        }
        
        int index = 0;
        for(int i = n; i < len; i++, index += 2){
            nums[index] = nums[i] & 1023;
            nums[index + 1] = nums[i] >> 10;
        }
        
        return nums;
        
    }
};


/****************************************************
 * To store two numbers in a single position, we do
 * the following:
 *
 * Suppose we have 2 numbers num1 = 4 and num2 = 9 and maxValue = 10
 *
 * To store:  pair = (num2 * maxValue) + num1 
 * To retrieve:  pair % maxValue   and   pair / maxValue
 *
 *	1. Storing the pair of numbers:
 *	(9 × 10) + 4 = 94 --> from above formula (num2 × maxValue) + num1
 *	94 is stored
 *
 *
 *	2. Retrieving each number one by one:
 *	94 % 10 = 4
 *	we got first number as 4
 *	94 / 10 = 9
 *	we got second number as 9
 *
 *
 * NOTE: In this code, we will take 1025 because of the given constraints  1 <= nums[i] <= 1000. i.e. The largest number will be 1000
 *	
 *
 * https://leetcode.com/problems/shuffle-the-array/discuss/1314638/JAVA-C%2B%2B-%3A-Simple-or-O(1)-Space-In-Place-or-100-Faster-or-Efficient-or-Explained
 * https://github.com/Akshaya-Amar/LeetCodeSolutions
 *
 *
 *
 * **************************************************/

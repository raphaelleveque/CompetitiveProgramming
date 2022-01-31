class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        map<int, int> m;
        vector<int> vec = nums;
        int n = nums.size();
        
        // Sort vec in ascending order
        // T.C = O(nlogn)
        sort(vec.begin(), vec.end());
        
        // Put the values in hash-map according to their values corresponding to their places in nums 
        // T.C = O(n)
	// The forloop is going backwards, so if there are any duplicate values, the map will only consider the smallest 'i'
	// That will help us because the map will not count the current number as smaller than itself
        for(int i=n-1; i>=0; i--) {
	    // Now, because the array is sorted, we can say that 'i' is the number of elements smaller
            // than the current number (copy[i])
            m[vec[i]] = i;
        }
        
        // Saving the result again in nums, because space complexity matters XD
        // T.C = O(n)
        for(int i=0; i<n; i++) {
            nums[i] = m[nums[i]];
        }
        
        return nums;
    }
};

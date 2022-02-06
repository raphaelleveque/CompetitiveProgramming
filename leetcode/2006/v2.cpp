class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int pairs = 0;
        
        // Creating a hashmap to store the frequency for each element
        // <key = nums[i],  value = frequency, or times that nums[i] appear>
		unordered_map<int, int> m; 
        
        
		for(int i = 0; i < nums.size(); i++){
            // Because it's an absolute value, 
            // |x - y| = k  ->  y = x +- k

            // pairs will add the frequency of each element
			pairs += (m[nums[i] - k] + m[nums[i] + k]);
            
            // After that, I add the current element to the map (if it's not already there)
            // and add its frequency
			m[nums[i]]++;
		}
		return pairs;
    }
};

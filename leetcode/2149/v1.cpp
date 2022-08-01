class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>::iterator positives = nums.begin();
        vector<int>::iterator negatives = nums.begin();
        vector<int> ans;
        
        for (int i = 0; i < nums.size() / 2; i++, positives++, negatives++) {
            while (*positives < 0)
                positives++;
            while (*negatives >= 0)
                negatives++;
            
            ans.push_back(*positives);
            ans.push_back(*negatives);
        }
        
        return ans;
    }
};

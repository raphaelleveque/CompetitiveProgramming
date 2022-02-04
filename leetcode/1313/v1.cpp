/*scan through the input list in groups of two. For each pair (a, b), append b to your output list a times.

e.g.
[1, 2, 3, 4] as your input can be interpreted as "one 2, three 4's" -> [2, 4, 4, 4]

*/

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        // First, we loop through the vector
        for (int i {}; i < nums.size(); i += 2) {
            // For every even number, we know how many times we will push back
            for (int j {}; j < nums.at(i); j++)
                ans.push_back(nums.at(i + 1));
        }
        return ans;
    }
};

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        // First, I create a string with the same size as the original string
        string ans = s;
        
        // Then, I iterate the new string with the vector's indeces
        for (int i {}; i < s.length(); i++) {
            ans[indices[i]] = s[i];
        }
        return ans;
    }
};

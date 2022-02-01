class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        // First, i will map every char of the string with its right position
        // (provided by the array)
        unordered_map<int, char> map;
        for (int i{}; i < indices.size(); i++) {
            map[indices[i]] = s[i];
        }
        
        // Using the description's example, 'l' is mapped to 0, 't' is mapped to 3, 'c' is mapped to 4
        // So now, we just need to iterate the map, from 0 to s.length()
        string ans;
        for (int i {}; i < indices.size(); i++) {
            ans.push_back(map[i]);
        }
        return ans;
    }
};

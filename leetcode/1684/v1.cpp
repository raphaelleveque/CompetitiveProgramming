class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count {};
        
        // Because unordered_map is an hashmap, it is very fast
        // So, I'm mapping all allowed characters into the hashmap
        unordered_map<char, bool> allowed_map;
        for (auto c : allowed) {
            allowed_map[c] = true;
        }
        
        // Now, I am looping through every char, and if it isn't in the map, I break out of the inner loop
        // and continue looping trough other strings in the vector
        for (auto word : words) {
            for (int i {}; i < word.length(); i++) {
                if (allowed_map[word[i]] == false)
                    break;
                if (i == word.length() - 1)
                    count++;
            }
        }
        return count;
    }
};

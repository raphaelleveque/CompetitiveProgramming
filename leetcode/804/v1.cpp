class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> alphabet {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        unordered_set<string> morse;
        for(auto &word : words) {
            string temp;
            for (auto &letter : word) {
                temp += alphabet.at(letter - 'a');
            }
            morse.insert(temp);
        }
        return morse.size();
    }
};

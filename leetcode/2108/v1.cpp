class Solution {
public:
    bool is_palindrome(string word) {
        for (int i{}, j = word.length() - 1; i <= j; i++, j--) {
            if (word[i] != word[j])
                return false;
        }
        return true;
    }
    
    string firstPalindrome(vector<string>& words) {
        for (auto word : words) {
            if (is_palindrome(word))
                return word;
        }
        return "";
    }
};

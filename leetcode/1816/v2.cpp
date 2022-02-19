class Solution {
public:
    string truncateSentence(string s, int k) {
        for (int i = 0; i < s.size(); ++i)
            // Every time a backspace appear, the 'k' will decrement
            // When k == 0, it will return the substring between s[0] and s[0 + i]
            // string substr (size_t pos, size_t len) const;
            if (s[i] == ' ' && --k == 0)
                return s.substr(0, i);
        return s;
    }
};

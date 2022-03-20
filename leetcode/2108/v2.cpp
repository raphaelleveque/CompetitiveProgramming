class Solution {
public:
    /* 
    string() creates a new string starting from rbegin(w), means reverse begin of w -  which is end of w;
    and ending at rend(w), which means reverse end of w -  which is beginning of w.
    in summary it creates a new string which is reverse of w  
    */
    
    string firstPalindrome(vector<string>& words) {
        for (auto &w : words)
            if (w == string(rbegin(w), rend(w)))
                return w;
        return "";
    }
};

class Solution {
public:
    string truncateSentence(string s, int k) {
        // The stringstream is like a file, and we can read and write from/in it
        // The stringstream receives the string s
        stringstream ss(s);
        string result = "";
        string token = "";
        
        // This loop will repeat itself until k == 0
        // 'token' will read each word from the stringstream
        // After that, we concatenate the token with the 'result'
        while(ss >> token && k--) {
            result += token + " ";
        }
        
        // Because the result string has a backspace at the end, we need to return
        // the substring excluding the last element
        return result.substr(0, result.length()-1); //removing last extra space
    }
};

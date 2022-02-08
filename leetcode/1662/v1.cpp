class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        // This will add (concatenate) all the strings from the vector
        // And store the entire vector string into w1 and w2
        // The third parameter says what will be added to the sum, which is an empty string (nothing)
        string w1 = accumulate(word1.begin(), word1.end(), string(""));
        string w2 = accumulate(word2.begin(), word2.end(), string(""));
        return (w1 == w2);
    }
};

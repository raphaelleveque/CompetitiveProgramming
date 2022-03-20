class Solution {
public:
/*
  template 
  bool equal (InputIterator1 first1, InputIterator1 last1,
              InputIterator2 first2)
	
first_1, last_1 : Initial and final positions of the first
    sequence. All the elements are present within a range [first_1,last_1)
first2 : Initial position of the second sequence.

Returns : 
true, if all of the elements in both ranges match; otherwise false
*/
    
    // This will compare the string iterator and the reverse string iterator
    string firstPalindrome(vector<string>& words) {
        for (auto &w : words)
            if (equal(begin(w), end(w), rbegin(w)))
                return w;
        return  {};
    } 
};

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        // finding the maximum number in the array
        // max_element returns a pointer, but we just want the value, so we dereference
        int max = *max_element(candies.begin(), candies.end());
        
        vector<bool> kidsWithCandies (candies.size());
        for (int i {}; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= max)
                kidsWithCandies[i] = true;
        }
        return kidsWithCandies;
    }
};

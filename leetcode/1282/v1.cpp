class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ans;
        
        // First, I paired up the ID with the index of each number
        vector<pair<int, int>> groupNindex;
        for (int i = 0; i < groupSizes.size(); i++)
            groupNindex.push_back(make_pair (groupSizes[i], i));
        
        // Then, I sorted the ID's
        sort(groupNindex.begin(), groupNindex.end());

        // Now that it's sorted, I created a temporary vector that will be pushed back to the matrix
        // Because it's sorted, I know there will be at least 3 numbers 3 in sequence 
        // to push back its index to the temporary array
        vector<pair<int, int>>::iterator it = groupNindex.begin();
        while (it != groupNindex.end()) {
            vector<int> tmp;
            tmp.reserve(it->first);
            for (int i = 0; i < tmp.capacity(); i++, it++)
                tmp.push_back(it->second);
            
            ans.push_back(tmp);
        }
        return ans;
    }
};

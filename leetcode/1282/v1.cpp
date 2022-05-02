class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ans;
        
        vector<pair<int, int>> groupNindex;
        for (int i = 0; i < groupSizes.size(); i++)
            groupNindex.push_back(make_pair (groupSizes[i], i));
        
        sort(groupNindex.begin(), groupNindex.end());

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

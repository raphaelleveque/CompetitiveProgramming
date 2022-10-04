class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> map;
        for (auto i : jewels)
            map.insert(i);
        int ans = 0;
        for (auto c : stones)
            if (map.find(c) != map.end())
                ans++;
        
        return ans;
    }
};

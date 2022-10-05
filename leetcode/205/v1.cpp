class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> map;
        unordered_set<char> tmap;
        
        for (int i = 0; i < s.size(); i++) {
            if (map.find(s.at(i)) == map.end() && tmap.find(t.at(i)) == tmap.end()) {
                map[s.at(i)] = t.at(i);
                tmap.insert(t.at(i));
            }
        }

        for (int i = 0; i < s.size(); i++) {
            s.at(i) = map[s.at(i)];
        }
        return s == t;
    }
};

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        mymap = defaultdict(list)
        for s in strs:
            sorted_str = ''.join(sorted(s))
            mymap[sorted_str].append(s)
        
        ans = []
        for a in mymap.values():
            ans.append(a)
        return ans
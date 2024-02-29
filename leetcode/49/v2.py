class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        mymap = {}

        for s in strs:
            hashmap_frequencia = frozenset(Counter(s).items())
            mymap.setdefault(hashmap_frequencia, []).append(s)
        
        ans = []
        for s in mymap.values():
            ans.append(s)
        return ans
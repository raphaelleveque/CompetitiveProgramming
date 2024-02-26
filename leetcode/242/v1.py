class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        dictionary = {}
        for i in s:
            dictionary[i] = dictionary.get(i, 0) + 1
        for j in t:
            if j not in dictionary:
                return False
            dictionary[j] -= 1
        
        for [key,pair] in dictionary.items():
            if pair != 0:
                return False
        return True



        

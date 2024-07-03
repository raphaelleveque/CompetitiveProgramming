class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        if len(s2) < len(s1): return False

        hash_s1 = Counter(s1)
        hash_s2 = Counter(s2[:len(s1)])
 
        l = 0
        for r in range(len(s1), len(s2)):
            # Como hashs são counters e não dicionários puros, 
            # a comparação leva em conta apenas as chaves com valores não-zero.
            if hash_s1 == hash_s2:
                return True
            hash_s2[s2[r]] += 1
            hash_s2[s2[l]] -= 1
            l += 1
        return hash_s1 == hash_s2




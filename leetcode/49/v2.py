class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        mymap = {}

        for s in strs:
            # Criando um map com os caracteres da string
            count = [0] * 26
            for c in s:
                count[ord(c) - ord("a")] += 1

            # Cada string que possuir essa mesma combinação de 
            # caracteres irá ser mapeada
            str_map = tuple(count)
            if str_map in mymap:
                mymap[str_map].append(s)
            else:
                mymap[str_map] = [s]
        return list(mymap.values())
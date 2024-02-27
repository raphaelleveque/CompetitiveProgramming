class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        mymap = {}
        j = 0
        for i in nums:
            k = target - i
            if k in mymap:
                return [mymap[k], j]
            else:
                mymap[i] = j
            j += 1
                    









                    

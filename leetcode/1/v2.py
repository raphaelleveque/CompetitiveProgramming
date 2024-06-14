class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashmap = {}
        for index, num in enumerate(nums):
            second_target = target - num
            if second_target in hashmap:
                return [index, hashmap[second_target]]
            hashmap[num] = index
        return []
            
        
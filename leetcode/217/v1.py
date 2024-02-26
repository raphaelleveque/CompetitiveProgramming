class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        duplicates = {}
        for i in nums:
            if i in duplicates:
                return True
            duplicates[i] = True
        
        return False

    

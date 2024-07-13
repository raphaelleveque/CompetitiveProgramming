class Solution:
    def search(self, nums: List[int], target: int) -> int:
        def binarysearch(lo, hi) -> int:
            if lo > hi:
                return -1
            
            mid = (lo + hi) // 2

            if nums[mid] > target:
                return binarysearch(lo, mid - 1)
            elif nums[mid] < target:
                return binarysearch(mid + 1, hi)
            else:
                return mid
        return binarysearch(0, len(nums) - 1)
        

class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        size = len(nums)
        ans = [1] * size

        for i in range(1, size):
            ans[i] = ans[i - 1] * nums[i - 1]

        multiplier = nums[-1]
        for i in range(size - 2, -1, -1):
            ans[i] = ans[i] * multiplier
            multiplier *= nums[i]

        return ans

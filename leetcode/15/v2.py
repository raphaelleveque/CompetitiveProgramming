from typing import List


class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        ans = []

        for i in range(len(nums)):
            if i > 0 and nums[i] == nums[i - 1]:
                continue
            j, k = i + 1, len(nums) - 1
            while j < k:
                threesum = nums[i] + nums[j] + nums[k]
                if threesum > 0:
                    k -= 1
                elif threesum < 0:
                    j += 1
                else:
                    ans.append([nums[i], nums[j], nums[k]])
                    tmpJ = j
                    j += 1
                    while j < k and nums[tmpJ] == nums[j]:
                        j += 1
        return ans

sol = Solution()
sol.threeSum([-1,0,1,2,-1,-4])
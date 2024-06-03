from typing import *

def threeSum(nums: List[int]) -> List[List[int]]:
    nums.sort()
    ans = Set()
    for i in range(len(nums)):
        j = i + 1
        k = len(nums) - 1
        while j < k:
            if nums[j] + nums[k] == -nums[i]:
                ans.append([nums[i], nums[j], nums[k]])
                j += 1
                k -= 1
            elif nums[j] + nums[k] > -nums[i]:
                k -= 1
            elif nums[j] + nums[k] < -nums[i]:
                j += 1
    return ans

print(threeSum([-1,0,1,2,-1,-4]))
        

        
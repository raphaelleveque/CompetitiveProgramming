from typing import List
import math
class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        totalSize = max(piles)
        lo, hi = 1, totalSize
        ans = totalSize
        while lo <= hi:
            mid = (lo + hi) // 2
            totalHours = 0
            for i in piles:
                totalHours += math.ceil(i / mid )
            if totalHours > h:
                lo = mid + 1
            else:
                hi = mid - 1
                ans = mid
        return ans
            
sol = Solution()
print(sol.minEatingSpeed([3,6,7,11], 8))
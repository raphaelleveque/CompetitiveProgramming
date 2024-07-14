from typing import List
import math

class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        # Initialize the binary search boundaries.
        # l is the minimum possible eating speed (1 banana per hour).
        # r is the maximum possible eating speed (the largest pile size).
        l, r = 1, max(piles)
        
        # Initialize the result with the upper boundary, which is the maximum eating speed.
        res = r

        # Binary search loop to find the minimum eating speed.
        while l <= r:
            # Calculate the middle point (potential eating speed).
            mid = (l + r) // 2

            # Calculate the total hours required to eat all bananas at the current mid speed.
            hours = 0
            for p in piles:
                # Use math.ceil to ensure we account for partial hours.
                # If p is 4 and mid is 3, math.ceil(4 / 3) would be 2 hours.
                hours += math.ceil(p / mid)

            # Check if the calculated hours exceed the allowed hours (h).
            if hours > h:
                # If it takes more hours than allowed, we need to increase the eating speed.
                l = mid + 1
            else:
                # If it takes h or fewer hours, we store the current mid as a potential result
                # and try to find a smaller possible eating speed.
                res = min(res, mid)
                r = mid - 1
        
        # Return the minimum eating speed that allows all bananas to be eaten within h hours.
        return res


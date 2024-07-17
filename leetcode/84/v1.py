from typing import List


class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        stack = [] # pair(index, height)
        maxArea = 0
        for i,h in enumerate(heights):
            while stack and h < stack[-1][1]:
                index,height = stack.pop()
                maxArea = max(maxArea, (i - index) * height)
            stack.append((i, h))
        
        for i,h in stack:
            maxArea = max(maxArea, h * (len(heights) - i))
        return maxArea

sol = Solution()
print(sol.largestRectangleArea([2,4])) # 4
        
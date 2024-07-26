from typing import List


class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        stack = [] #pair(index, height)
        maxArea = 0

        for i,h in enumerate(heights):
            start = i
            while stack and h < stack[-1][1]:
                index, height = stack.pop()
                maxArea = max((i - index) * height, maxArea)
                start = index
            stack.append((start, h))
        
        for i, h in stack:
            area = (len(heights) - i) * h
            maxArea = max(area, maxArea)
        return maxArea

sol = Solution()
print(sol.largestRectangleArea([2,1,2]))
        
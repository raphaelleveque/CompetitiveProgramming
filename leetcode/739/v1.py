class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        ans = [0] * len(temperatures)
        stack = [] #pair [temperature, index]
        for index, temp in enumerate(temperatures):
            while stack and temp > stack[-1][0]:
                prevTemp, prevIndx = stack.pop()
                ans[prevIndx] = (index - prevIndx)
            stack.append([temp, index])
        return ans

        

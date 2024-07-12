from typing import List


class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        
        paths = []
        def backtrack(n_opened, n_closed, path):
            if n_opened == n_closed == n:
                paths.append(path)
                return path
            
            if n_opened < n:
                backtrack(n_opened + 1, n_closed, path + "(")
            
            if n_opened > n_closed:
                backtrack(n_opened, n_closed + 1, path + ")")
        
        backtrack(0, 0, "")
        
        return paths

sol = Solution()
print(sol.generateParenthesis(3))
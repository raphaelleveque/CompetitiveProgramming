class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        res = []
        def backtracking(n_open, n_close, path):
            if n_open == n_close == n:
                res.append(path)
                return
            
            if n_open < n:
                backtracking(n_open + 1, n_close, path + '(')
            
            if n_close < n_open:
                backtracking(n_open, n_close + 1, path + ')')
        
        backtracking(0, 0, '')
        return res
        

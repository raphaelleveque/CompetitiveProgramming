class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        ROWS, COLS = len(matrix), len(matrix[0])
        
        bottom, top = 0, ROWS - 1
        while bottom <= top:
            row = (bottom + top) // 2
            if target > matrix[row][-1]:
                bottom = row + 1
            elif target < matrix[row][0]:
                top = row - 1
            else:
                break
        
        if not bottom <= top:
            return False

        l, r = 0, COLS - 1
        while l <= r:
            mid = (l + r) // 2
            if target > matrix[row][mid]:
                l = mid + 1
            elif target < matrix[row][mid]:
                r = mid - 1
            else:
                return True
        return False
        

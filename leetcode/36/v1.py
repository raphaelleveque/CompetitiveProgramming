class Solution:
    def validateRows(self, board):
        rowMap = set()
        for row in board:
            for column in range(len(row)):
                if row[column] != "." and row[column] not in rowMap:
                    rowMap.add(row[column])
                elif row[column] in rowMap:
                    return False
            rowMap.clear()
        return True

    def validateColumns(self, board):
        columnMap = set()
        for column in zip(*board):
            for row in range(len(column)):
                if column[row] != "." and column[row] not in columnMap:
                    columnMap.add(column[row])
                elif column[row] in columnMap:
                    return False
            columnMap.clear()
        return True

    def validateQuarters(self, board):
        myQuarter = set()
        for row in range(0, 9, 3):
            for column in range(0, 9, 3):
                for i in range(0, 3):
                    for j in range(0, 3):
                        if board[row + i][column + j] != "." and board[row + i][column + j] not in myQuarter:
                            myQuarter.add(board[row + i][column + j])
                        elif board[row + i][column + j] in myQuarter:
                            return False
                myQuarter.clear()
            myQuarter.clear()
        
        return True


    def isValidSudoku(self, board: List[List[str]]) -> bool:
        return self.validateRows(board) and self.validateColumns(board) and self.validateQuarters(board)

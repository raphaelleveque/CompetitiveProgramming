class MinStack:

    def __init__(self):
        self.stack = []
        self.min_stack = []


    def push(self, val: int) -> None:
        if len(self.stack) == 0:
            self.min_stack.append(val)
        else:
            min_value = min(self.min_stack[-1], val)
            self.min_stack.append(min_value)
        self.stack.append(val)
        

    def pop(self) -> None:
        if self.stack:
            self.stack.pop()
        if self.min_stack:
            self.min_stack.pop()
        

    def top(self) -> int:
        return self.stack[-1] if self.stack else None
        

    def getMin(self) -> int:
        return self.min_stack[-1] if self.min_stack else None
        


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()

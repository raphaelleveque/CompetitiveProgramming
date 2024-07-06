class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        ans = 0
        stack = []

        for c in tokens:
            if c == '+':
                stack[-2] = stack[-2] + stack[-1]
            elif c == '-':
                stack[-2] = stack[-2] - stack[-1]
            elif c == '*':
                stack[-2] = stack[-2] * stack[-1]
            elif c == '/':
                stack[-2] = int(stack[-2] / stack[-1])
            else:
                stack.append(int(c))
                continue
            stack.pop()
        return stack[0]

class Solution:

    def encode(self, strs: List[str]) -> str:
        ans = ""
        for s in strs:
            ans += str(len(s)) + s
        return ans

    def decode(self, s: str) -> List[str]:
        ans = []
        i = 0
        while i < len(s):
            print(s[i + 1 : int(s[i]) + 1])
            ans.append(s[i + 1 : i + int(s[i]) + 1])
            i = int(s[i]) + 1
        return ans
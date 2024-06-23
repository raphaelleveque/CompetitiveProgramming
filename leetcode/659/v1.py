from typing import List


class Solution:

    def encode(self, strs: List[str]) -> str:
        ans = ""
        for s in strs:
            ans += str(len(s)) + "#" + s
        return ans

    def decode(self, s: str) -> List[str]:
        ans = []
        i = 0
        while i < len(s):
            word_size = ""
            while s[i] != "#":
                word_size += s[i]
                i += 1
            word_size = int(word_size)
            ans.append(s[i + 1 : i + word_size + 1])
            i += word_size + 1
        return ans


sol = Solution()

sol.decode(sol.encode(["we","say",":","yes","!@#$%^&*()", "we"]))
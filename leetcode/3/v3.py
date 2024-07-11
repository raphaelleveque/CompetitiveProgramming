from collections import defaultdict


class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        hashset = defaultdict(int)
        max_length = 0
        l = 0
        for r in range(len(s)):
            if hashset.get(s[r]) is None or 0:
                hashset[s[r]] += 1
            else:
                while hashset[s[r]] > 0:
                    hashset[s[l]] -= 1
                    l += 1
                hashset[s[r]] += 1
            max_length = max(max_length, r - l + 1)
        return max_length

        

solution = Solution()

s = "abcabcbb"
expected_output = 3
print(solution.lengthOfLongestSubstring(s))
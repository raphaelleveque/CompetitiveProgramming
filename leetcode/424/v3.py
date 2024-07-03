from collections import defaultdict

class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        ans = 0
        l = 0
        window_freq = defaultdict(int)
        most_freq = 0
        for r in range(len(s)):
            char = s[r]
            window_freq[char] += 1
            most_freq = max(window_freq[char], most_freq)
            while (r - l + 1) - most_freq > k:
                window_freq[s[l]] -= 1
                l += 1
            ans = max(ans, (r - l + 1))
        return ans



sol = Solution()
sol.characterReplacement("AABABBA", 1)
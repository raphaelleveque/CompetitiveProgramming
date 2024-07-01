class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        count = defaultdict(int)
        ans = 0
        l = 0
        for r, char in enumerate(s):
            count[char] += 1
            while (r - l + 1) - max(count.values()) > k:
                count[s[l]] -= 1
                l += 1
            ans = max(ans, r - l + 1)
        return ans
        
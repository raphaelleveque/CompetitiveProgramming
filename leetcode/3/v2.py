class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        r, l = 0, 0
        charset = set()
        n = len(s)
        max_len = 0
        cur_len = 0
        while r < n:
            if s[r] not in charset:
                charset.add(s[r])
                r += 1
                cur_len += 1
                max_len = max(cur_len, max_len)
            else:
                while s[l] != s[r]:
                    charset.remove(s[l])
                    l += 1
                charset.remove(s[l])
                l += 1
                cur_len = len(charset)

        return max_len
# Test the function with the given input
input_string = "dvdf"
solution = Solution()
result = solution.lengthOfLongestSubstring(input_string)
print(f"The length of the longest substring without repeating characters is: {result}")

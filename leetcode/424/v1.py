from collections import defaultdict


class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        left, right = 0, 0
        charmap = defaultdict(int)
        replacements = 0
        max_repeating_char = s[0]
        max_len = 0

        while right < len(s):
            charmap[s[right]] += 1

            if s[right] != s[left]:
                if charmap[max_repeating_char] <= charmap[s[right]]:
                    max_repeating_char = s[right]
                replacements += 1
            
            while replacements > k:
                charmap[s[left]] -= 1
                if s[left] != max_repeating_char:
                    replacements -= 1
                left += 1
            max_len = max(right - left + 1, max_len)
            right += 1
            

        return max_len
    
sol = Solution()
print(sol.characterReplacement("ABBB", 2))
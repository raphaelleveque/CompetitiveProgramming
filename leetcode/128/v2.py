class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        hashset = set(nums)
        longest = 0

        for num in nums:
            hashset.add(num)
            # checar se é o inicio de uma sequencia
            if (num - 1) not in hashset:
                length = 0
                while (num + length) in hashset:
                    length += 1
                longest = max(length, longest)
        return longest



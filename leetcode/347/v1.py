class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        hashmap = defaultdict(int)
        for i in nums:
            hashmap[i] += 1
        
        bucket = [[] for _ in range(len(nums) + 1)]
        for key,value in hashmap.items():
            bucket[value].append(key)
        
        ans = []
        for i in reversed(bucket):
            while i != [] and k > 0:
                ans.append(i[-1])
                k -= 1
                i.pop()
            if k == 0:
                break
        return ans
        

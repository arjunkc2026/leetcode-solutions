1class Solution:
2    def repeatedNTimes(self, nums):
3        seen = set()
4        for num in nums:
5            if num in seen:
6                return num
7            seen.add(num)
8        
1class Solution:
2    def isPalindrome(self, x: int) -> bool:
3        if x < 0 or (x % 10 == 0 and x != 0):
4            return False
5        rev = 0
6        while x > rev:
7            rev = rev * 10 + x % 10
8            x //= 10
9        return x == rev or x == rev // 10
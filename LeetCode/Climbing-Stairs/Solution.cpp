1class Solution {
2public:
3    int climbStairs(int n) {
4        if (n <= 2)
5            return n;
6
7        int prev2 = 1;  // ways to reach step 1
8        int prev1 = 2;  // ways to reach step 2
9
10        for (int i = 3; i <= n; i++) {
11            int current = prev1 + prev2;
12            prev2 = prev1;
13            prev1 = current;
14        }
15
16        return prev1;
17    }
18};
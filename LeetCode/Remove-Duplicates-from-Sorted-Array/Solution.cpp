1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        int n = nums.size();
5        if (n == 0) return 0;
6
7        int k = 1;  // index for next unique element
8
9        for (int i = 1; i < n; i++) {
10            if (nums[i] != nums[i - 1]) {
11                nums[k] = nums[i];
12                k++;
13            }
14        }
15        return k;
16    }
17};
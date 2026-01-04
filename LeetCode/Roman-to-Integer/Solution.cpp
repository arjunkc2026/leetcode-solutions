1
2class Solution {
3public:
4    int romanToInt(string s) {
5        unordered_map<char, int> value = {
6            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
7            {'C', 100}, {'D', 500}, {'M', 1000}
8        };
9
10        int result = 0;
11
12        for (int i = 0; i < s.length(); i++) {
13            // If current value is smaller than the next value, subtract it
14            if (i + 1 < s.length() && value[s[i]] < value[s[i + 1]]) {
15                result -= value[s[i]];
16            } else {
17                result += value[s[i]];
18            }
19        }
20
21        return result;
22    }
23};
1class Solution {
2public:
3    int lengthOfLastWord(string s) {
4        int length = 0;
5        int i = s.size() - 1;
6
7        
8        while (i >= 0 && s[i] == ' ') i--;
9
10       
11        while (i >= 0 && s[i] != ' ') {
12            length++;
13            i--;
14        }
15
16        return length;
17    }
18};
1class Solution {
2public:
3    bool isValid(string s) {
4        stack<char> st;
5
6        for (char c : s) {
7            if (c == '(' || c == '{' || c == '[') {
8                st.push(c);
9            } else {
10                if (st.empty()) return false;
11
12                char top = st.top();
13                st.pop();
14
15                if ((c == ')' && top != '(') ||
16                    (c == '}' && top != '{') ||
17                    (c == ']' && top != '[')) {
18                    return false;
19                }
20            }
21        }
22
23        return st.empty();
24    }
25};
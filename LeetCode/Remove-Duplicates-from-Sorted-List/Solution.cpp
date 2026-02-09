1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* deleteDuplicates(ListNode* head) {
14        if (head == NULL) return head;
15
16        ListNode* curr = head;
17
18        while (curr != NULL && curr->next != NULL) {
19            if (curr->val == curr->next->val) {
20                curr->next = curr->next->next; 
21            } else {
22                curr = curr->next;  
23            }
24        }
25
26        return head;
27    }
28};
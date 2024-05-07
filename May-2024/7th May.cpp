/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        stack<int> s1, s2;
        while (head) {
            s1.push(head->val);
            head = head->next;
        }
        int carry = 0;
        ListNode *temp = new ListNode(-1), *ans = temp;
        while (!s1.empty() || carry) {
            int sum = carry;
            if (!s1.empty()) {
                sum += (2 * s1.top());
                s1.pop();
            }
            s2.push(sum % 10);
            carry = sum / 10;
        }
        while (!s2.empty()) {
            ListNode* node = new ListNode(s2.top());
            s2.pop();
            temp->next = node;
            temp = node;
        }
        return ans->next;
    }
};
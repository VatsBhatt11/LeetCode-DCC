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
    ListNode* reverseLL(ListNode* head) {
        if (!head || !head->next)
            return head;
        ListNode *prev = NULL, *cur = head, *forward;
        while (cur) {
            forward = cur->next;
            cur->next = prev;
            prev = cur;
            cur = forward;
        }
        return prev;
    }

    ListNode* removeNodes(ListNode* head) {
        head = reverseLL(head);
        ListNode *temp = new ListNode(-1), *prev = temp;
        int x = head->val;
        while (head) {
            while (head && (head->val < x))
                head = head->next;
            if (!head) {
                temp->next = head;
                break;
            }
            x = head->val;
            temp->next = head;
            temp = head;
            head = head->next;
        }
        return reverseLL(prev->next);
    }
};
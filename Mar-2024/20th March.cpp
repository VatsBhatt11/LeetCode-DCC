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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *p1 = list1, *p2 = p1;
        for (int i = 1; i < a; i++) {
            p1 = p1->next;
            p2 = p2->next;
        }
        for (int i = 1; i <= b - a + 2; i++)
            p2 = p2->next;
        p1->next = list2;
        p1 = p1->next;
        while (p1->next)
            p1 = p1->next;
        p1->next = p2;
        return list1;
    }
};
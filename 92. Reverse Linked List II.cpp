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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode newHead(0);
        newHead.next = head;
        ListNode *pre = &newHead, *curr = head, *next = NULL;
        int i = 1;
        while ( i < left )
        {
            pre = curr;
            curr = curr->next;
            i++;
        }
        while( i< right )
        {
            next = curr->next;
            curr->next = curr->next->next;
            next->next = pre->next;
            pre->next = next;
            i++;
        }
        return newHead.next;
    }
};
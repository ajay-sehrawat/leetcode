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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode * pre = head, *curr = head;
        while( head != NULL && head->val == val )
        {
            head = head->next;
            curr = head;
            pre = head;
        }
        while ( head )
        {
            if ( head->val == val )
            {
                pre->next = head->next;
            }
            else
                pre = head;
            head = head->next;
        }
        return curr;
    }
};
//Last Solution Only D-Linked the elements it didn't deleted the nodes, in the we free up memory.
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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummy(0,head);
        ListNode *pre = &dummy;
        ListNode *NodeToDelete;
        while( pre->next )
        {
            if ( pre->next->val == val )
            {
                NodeToDelete = pre->next;
                pre->next = NodeToDelete->next;
                delete NodeToDelete;
            }
            else
                pre = pre->next;
        }
        return dummy.next;
    }
};
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode dummy(0,head);

        ListNode *pre = &dummy;
        ListNode * tail = head;
        ListNode *NodeToDelete;
        int temp;
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        while( head != nullptr &&  head->next != nullptr )
        {
            while ( head->val == head->next->val )
            {
                temp = head->next->val;
                NodeToDelete = head->next;
                head->next = NodeToDelete->next;
                delete NodeToDelete; 
            }
            if ( temp == head->val )
            {
                NodeToDelete = head;
                head = NodeToDelete->next;
                delete NodeToDelete;
            }
            else 
            {
                head = head->next;
            }  
        }
        return dummy.next;
    }
};
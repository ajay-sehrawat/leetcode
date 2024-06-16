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
//First Method;
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0,head);
        int count = 0;
        ListNode *pre = head;
        ListNode* NodeToDelete;
        
        while( pre != nullptr )
        {
            pre = pre->next;
            count++;
        }
        count -= n;
        int i = 0;
        pre = &dummy;
        for (int i=0; i<count; i++ )
        {
            pre = pre->next;
        }
        NodeToDelete = pre->next;
        pre->next = NodeToDelete->next;
        delete NodeToDelete;

        return dummy.next;
    }
};
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
 //Second Method is to Use tow pointers, move the first pointer n steps ahead and then delte the element required.
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0,head);
        int count = 0;
        ListNode *first = &dummy, *second = &dummy;
        
        for (int i=0; i<=n; i++ )
            first = first->next;
        
        while( first != nullptr )
        {
            first = first->next;
            second = second->next;
        }
    
        ListNode *NodeToDelete = second->next;
        second->next = NodeToDelete->next;
        delete NodeToDelete;

        return dummy.next;
    }
};
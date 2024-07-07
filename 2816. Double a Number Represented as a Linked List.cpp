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
        stack<int> st;
        ListNode *prev = NULL, *curr = head, *front = NULL;
        //Reverse LL
        while( curr != NULL )
        {
            front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }
        head = prev;
        int carry = 0;
        ListNode* check = head;

        while( check != nullptr )
        {
            cout<<check->val<<endl;
            int val = check->val;
            val = val*2+carry;
            carry = val/10;
            check->val = val%10;
            if ( check->next != nullptr )
                check = check->next;
            else
                break;
        }
        if ( carry > 0 )
        {
            ListNode *add = new ListNode();
            add->val = carry;
            add->next = NULL;
            check->next = add;
        }
        //Again Reverse LL
        prev = NULL, curr = head, front = NULL;
        while( curr != NULL )
        {
            front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }
        head = prev;
        return head;
    }

};
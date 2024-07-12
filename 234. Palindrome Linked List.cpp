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
//Using String Is Considered cheating
public:
    bool isPalindrome(ListNode* head) {
        ListNode *iter = head;
        string check;
        while ( iter != nullptr )
        {
            int val = iter->val;
            check += to_string(val);
            iter = iter->next;
        }
        int i = 0, j = check.size()-1;
        while( i <= j )
        {
            if ( check[i] != check[j] )
                return false;
            i++, j--;
        }
        return true;
    }
};
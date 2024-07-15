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
    ListNode* middleNode(ListNode* head) {
        ListNode *pre = head, *post = head;
        int count = 1;
        while( pre->next != nullptr )
        {
            count++;
            pre = pre->next;
        }
        count = count/2;
        while( count > 0 )
        {
            post = post->next;
            count--;
        }
        return post;
    }
};
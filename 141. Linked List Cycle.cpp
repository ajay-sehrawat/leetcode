/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        unordered_set<ListNode*> mp;
        ListNode *point = head;
        while( point != NULL )
        {
            if ( mp.find(point) != mp.end() )
                return true;
            mp.insert(point);
            point = point->next;
        }
        return false;
    }
};
//Two Pointer Approach
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *s=head, *f=head;
        while(f && f->next){
            s=s->next;
            f=f->next->next;
            if(s==f) return true;
        }
        return false;
    }
};
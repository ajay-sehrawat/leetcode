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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int i = -1, j = -1;
        int minn = INT_MAX;
        int maxx = -1;
        ListNode* front = head->next;
        ListNode* back = head;
        int count = 1;
        while( front->next != nullptr )
        {
            count++;
            int check = front->val;
            if ( ((check > back->val) && (check > front->next->val)) || ((check < back->val) && (check < front->next->val)) )
            {
                if ( j == -1 )
                    j = count;
                if ( i != -1 )
                    minn = min(minn,count-i);
                i = count;
            }
            back = front;
            front = front->next;
        }
        if ( minn == INT_MAX )
            return {-1,-1};
        maxx = max(maxx,i-j);
        return {minn,maxx};
    }
};
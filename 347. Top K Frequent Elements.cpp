// THis works but heap insertion and deletion take O(logn) time So total time is O(n*logn)
//We need to do it in better than O(n*logn) time
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        for( int i=0; i<nums.size(); i++ )
        {
            mp[nums[i]]++;
        }

        priority_queue<pair<int, int>> pqueue;

        for (auto i : mp)
            pqueue.push(make_pair(i.second,i.first));

        vector<int> ans;
        while ( k > 0 )
        {
            ans.push_back(pqueue.top().second);
            pqueue.pop();
            k--;
        }

        return ans;
    }
};
//Better than O(n*logn)

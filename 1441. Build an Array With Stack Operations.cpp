class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int t = target.size();
        int last = target[t-1];

        int i = 0, j=0;
        while ( i< last )
        {
            if ( j<t && target[j] == i+1 )
            {
                j++;
                i++;
                ans.push_back("Push");
            }
            else
            {
                ans.push_back("Push");
                ans.push_back("Pop");
                i++;
            }
        }
        return ans;
    }
};
class Solution {
public:
    string makeGood(string s) {
        int n = s.size();
        stack<char> st;
        for( int i=n-1; i>=0; i-- )
        {
            if ( !st.empty() )
            {
                if ( st.top() == s[i]+32 || st.top() == s[i]-32 ){
                    st.pop();
                    continue;
                }
            }
            st.push(s[i]);
        }
        string ans;
        while(!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};
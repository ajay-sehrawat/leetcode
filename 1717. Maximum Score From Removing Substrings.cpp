class Solution {
public:
    int maximumGain(string s, int x, int y) {
        stack<char> st;
        string check1, check2;
        check1 = x > y ? "ab" : "ba";
        check2 = x > y ? "ba" : "ab";
        int high = max(x,y);
        int low = min(x,y);
        int ans = 0;
        for( char c: s )
        {
            if ( !st.empty() && st.top() == check1[0] && check1[1] == c )
            {
                ans += high;
                st.pop();
            }
            else
                st.push(c);
        }

        string remain;
        while( !st.empty() )
        {
            remain += st.top();
            st.pop();
        }
        reverse(remain.begin(), remain.end());
        for( char c: remain )
        {
            if ( !st.empty() && st.top() == check2[0] && check2[1] == c )
            {
                ans += low;
                st.pop();
            }
            else
                st.push(c);
        }
        return ans;
    }
};
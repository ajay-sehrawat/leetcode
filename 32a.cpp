class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.length();
        vector<int> stack;
        stack.push_back(0);
        int count = 0, max_p = 0, p_count = 0;

        for ( int i=0; i<n; i++ )
        {
             if ( s[i] == '(' )
                stack.push_back(s[i]);
        }
        for ( int i=0; i<n; i++ )
        {
            if ( s[i] == ')' && stack.back() != 0 ){
                count+=2;
                stack.pop_back();
                p_count = 0;
            }
            else{
                p_count++;
                if ( p_count > 1 )
                    count = 0;
            }
            max_p = max(count, max_p);
        }
        return max_p;
    }      
}; 
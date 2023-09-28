class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.length();
        vector<int> stack;
        
        stack.push_back(0);
        int count = 0, max_p = 0, p = 0;
        for ( int i=0; i<n; i++ )
        {
            if ( s[i] == '(' ){
                if ( p == 0 ){
                    count = 0;
                }
                p = 0;
                stack.push_back(s[i]);
            }   
            else if ( stack.back() == '(' ){
                stack.pop_back();
                count+=2;
                p = 1;
            }
            max_p = max(count,max_p);
        }
        return max_p;
    }      
}; 
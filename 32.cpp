class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.length();
        vector<int> stack;
        stack.push_back(s[0]);
        int count = 0, max = 0;

        for ( int i=1; i<n; i++ )
        {
             if ( stack.back() == '(' && s[i]  == ')' ){
                 stack.pop_back();
                 count += 2;
             }
             else{
                 stack.push_back(s[i]);
                 if ( max < count ){
                     max = count;
                     count = 0;
                 }  
             }
             max = count;
        }
        return max;
    }      
};
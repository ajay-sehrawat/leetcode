class Solution {
public:
    string simplifyPath(string path) {
        int n = path.length();

        vector<char> stack;

        int countsl = 0, countdo = 0;
        for ( int i=0; i<n; i++ )
        {
            if ( path[i] == '/' || path[i] == '_' ){
                
                countsl++;
                if ( countsl > 1 )
                    stack.pop_back();
                else
                   stack.push_back(path[i]);
            }
            else if ( path[i] == '.' ){
                countdo++;
                if ( countdo > 1 )
                {
                    while ( stack.back() != '/' )
                        stack.pop_back();
                }
                else
                    continue;
            }
            else
                stack.push_back(path[i]);

            countdo = 0;
            countsl = 0;
        }

        return ToString(stack);
    }
};
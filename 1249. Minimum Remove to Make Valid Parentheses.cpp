class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<char> st;
        queue<char> qu;
        int n = s.size();
        int openPar = 0, closePar = 0;
        for(int i=0; i<n; i++ )
        {
            if ( s[i] == '(' )
                openPar++;
            else if ( s[i] == ')' )
                closePar++;

            if ( closePar > openPar ){
                closePar--;
            }
            else
                qu.push(s[i]);
        }
        s = "";
        while( !qu.empty() )
        {
            s += qu.front();
            qu.pop();
        }

        openPar = 0, closePar = 0;
        n = s.size();
        for(int i=n-1; i>=0; i-- )
        {
            if ( s[i] == '(' )
                openPar++;
            else if ( s[i] == ')' )
                closePar++;

            if ( closePar < openPar ){
                openPar--;
            }
            else
                st.push(s[i]);
        }
        s = "";
        while( !st.empty() )
        {
            s += st.top();
            st.pop();
        }
        return s;
    }
};
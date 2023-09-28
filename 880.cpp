class Solution {
public:
    string decodeAtIndex(string s, int k) {
        vector<char> vect;
        int n = s.size();
        string a;
        int l=0, count = 0;
        for ( int i=0; i<n; i++ )
        {
            if ( !isdigit(s[i]) ){
                vect.push_back(s[i]);
                cout<<vect.back();
                count++;
                if ( count == k ){
                    a = vect.back();
                    return a;
                }
                    
            } 
            else{
                l = s[i] - 48;
                while ( l>1 ){
                    for ( auto& it: vect)
                        vect.    
                }
                l--;
                }
            }
        }
       return string("-1"); 
    }
};
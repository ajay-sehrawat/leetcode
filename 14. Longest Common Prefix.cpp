//O(n*L) solution
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string check = strs[0];
        int ch_size = strs[0].size();
        int ans = INT_MAX, count = 0;
        int i = 1, j = 0;
        while( i<n )
        {
            int m = strs[i].size();
            j = 0, count = 0;
            for( int k=0; k<m; k++ )
            {
                if ( j<ch_size && check[j++] == strs[i][k] )
                {
                    count++;
                }
                else
                    break;
            }
            ans = min(count,ans);
            i++;
        }
        return check.substr(0,ans);
    }
};
//O(nlogn)
//We first sort the array of strings.
//Then, we choose the first and last string in the array. [They are supposed to be the most different among all the pairs of strings in the sorted array]
//We just compare how many common characters match from index i = 0 of these two strings.
class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        int n = str.size();
        if(n==0) return "";
        
        string ans  = "";
        sort(begin(str), end(str));
        string a = str[0];
        string b = str[n-1];
        
        for(int i=0; i<a.size(); i++){
            if(a[i]==b[i]){
                ans = ans + a[i];
            }
            else{
                break;
            }
        }
        
        return ans;
        
    }
};
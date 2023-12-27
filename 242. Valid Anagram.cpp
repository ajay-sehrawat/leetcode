class Solution {
public:
    bool isAnagram(string s, string t) {

        vector<int> ans1(26,0);
        vector<int> ans2(26,0);

        for( int i=0; i<s.size(); i++ )
            ans1[s[i]-'a']++;

        for( int i=0; i<t.size(); i++ )
            ans2[t[i]-'a']++;

        return ans1==ans2;
    }
};
//The expression t[i] - 'a' convert to an index in the range 0 to 25.
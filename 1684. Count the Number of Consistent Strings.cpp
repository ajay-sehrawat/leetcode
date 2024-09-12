//Use of Vector is faster than unordered map
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<int> amap(26,0);

        for( int i=0; i<allowed.size(); i++ )
        {
            amap[allowed[i]-'a'] = 1;
        } 
        int count = 0;
        bool check = true;
        for( int i=0; i<words.size(); i++ )
        {
            string temp = words[i];
            check = true;
            for (int j=0; j<temp.size(); j++ )
            {
                if ( amap[temp[j]-'a'] != 1 )
                {
                    check = false;
                    break;
                }
            }
            if ( check )
                count++;
        }
        return count;
    }
};
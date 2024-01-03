class Solution {
public:
    string frequencySort(string s) {
        
        unordered_map<char, int> freq;
        string ans = "";
        for( char c: s )
            freq[c]++;

        vector<pair<int,char>> vect;

        for( auto i: freq )
            vect.push_back( {i.second, i.first});
        
        sort(vect.rbegin(),vect.rend());
        
        for( auto i: vect ){
            int a = i.first;
            while( a-- )
                ans += i.second;
        }
        
        return ans;
    }
};
/*class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;

        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        string ans="";
        priority_queue<pair<int,char>>p;

        for(auto i : mp)
        {
              p.push({i.second,i.first});
        }

        while(!p.empty())
        {
            int n = p.top().first;
            while(n--)
            {
                ans+=p.top().second;
            }
            p.pop();
        }
        return ans;
        
    }
};*/
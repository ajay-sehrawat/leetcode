class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());

        int n = people.size(), i=0, count = 0;
        while( i<n-1 )
        {
            if ( people[i]+people[i+1] <=limit )
                i+=2;
            else
                i++;
            
            count++;
        }
        if ( people[n-2]+people[n-1] > limit )
            count++;
        
        return count;
    }
};
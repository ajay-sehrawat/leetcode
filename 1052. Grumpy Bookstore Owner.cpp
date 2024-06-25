    class Solution {
    public:
        int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
            int n = customers.size();
            vector<int> unsatis(n,0);
            for( int i=0; i<n; i++ )
            {
                if ( grumpy[i] == 1 )
                    unsatis[i] = customers[i];
            }
            int i = 0, sum = 0;
            while( i< minutes )
                sum += unsatis[i++];

            int ans = sum, j = 0, start = 0, end = i-1;
            while( i<n )
            {
                sum += unsatis[i];
                sum -= unsatis[j++];
                if ( ans < sum )
                {
                    start = j;
                    end = i;
                    ans = sum;
                }
                i++;
            }
            cout<<ans<<endl<<start<<endl<<end<<endl;
            for (int i=0; i<n; i++ )
            {
                if ( grumpy[i] == 0 )
                    ans += customers[i];
            }
            return ans;
        }   
    };
    //Without Extra Space
        class Solution {
    public:
        int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
            int n = customers.size(), sum = 0;
            for( int i=0; i<n; i++ )
            {
                if ( grumpy[i] == 0 )
                    sum += customers[i];
            }
            int i = 0, sumGrumpy = 0;
            while( i< minutes )
            {
                if ( grumpy[i] == 1 )
                    sumGrumpy += customers[i];
                i++;
            }
            int j = 0, ans = sumGrumpy;
            for( int i=minutes; i<n; i++ )
            {
                if( grumpy[i] == 1 )
                {
                    sumGrumpy += customers[i];
                }
                if ( grumpy[j] == 1 )
                        sumGrumpy -= customers[j];
                j++;
                ans = max(ans,sumGrumpy);
            }
            return ans+sum;
        }   
    };
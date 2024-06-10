class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,bool> mp;
        int mul = 10, num, sum;
        while ( n != 1 )
        {
            sum = 0;
            while ( n > 0 )
            {
                num = n%mul;
                n /= mul;
                sum += pow(num,2);
            }
            if ( mp.find(sum) != mp.end() )
                return false;
            mp[sum] = true;
            n = sum;
        }
        return true;
    }
};
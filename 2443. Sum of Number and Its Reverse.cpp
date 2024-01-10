class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        string rev = "";
        int temp;
        for( int i=0; i<=num; i++ )
        {
            rev = to_string(i);
            reverse(rev.begin(),rev.end());
            temp = stoi(rev);

            if ( i+temp == num )
                return true;
        }
        return false;
    }
};
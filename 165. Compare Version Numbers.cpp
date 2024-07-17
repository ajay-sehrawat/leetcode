class Solution {
public:
    int compareVersion(string s1, string s2) {
        int i =0, j =0;
        int n = s1.size(), m = s2.size();
        string t1, t2;
        int num1, num2;
        while( i<n && j<m )
        {
            t1 ="", t2 ="";
            num1 = 0, num2 = 0;
            while ( i<n && s1[i] != '.' )
            {
                t1 += s1[i];
                i++;
            }
            i++;
            num1 = stoi(t1);
            while( j<m && s2[j] != '.' )
            {
                t2 += s2[j];
                j++;
            }
            j++;
            num2 = stoi(t2);
            if ( num1 > num2 )
                return 1;
            else if ( num1 < num2 )
                return -1;
        }
        if ( j != m )
        {
            while ( j<m )
            {
                t2 ="";
                while( j<m && s2[j] != '.' )
                {
                    t2 += s2[j];
                    j++;
                }
                j++;
                num2 = stoi(t2);
                if ( 0 < num2 )
                    return -1;
            }
        }
        if ( i != n )
        {
            while ( i<n )
            {
                t1 ="";
                while( i<n && s1[i] != '.' )
                {
                    t1 += s1[i];
                    i++;
                }
                i++;
                cout<<num1<<endl;
                num1 = stoi(t1);
                if ( num1 > 0 )
                    return 1;
            }
        }
        return 0;
    }
};
#include <bits/stdc++.h>
using namespace std;
//Boredom
int main()
{
    double x = 2.0;
    double n = -2147483648;
    double ans = x;
    long long int k = abs(n);
        if ( n == 0 )
            return 1;
        for ( long long int i=2; i<=k; i++ )
        {
            ans = ans*x;
        }
        if ( n > 0 )
            cout<<ans;
        else
            cout<<1/ans;
    
   
    return 0;
}
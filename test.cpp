#include<bits/stdc++.h>
using namespace std;
 int main() 
 {
    string val, ans, check;
    cin>>val;
    string inti = val.substr(0,3); 
    int n = val.size();
    for( int i=3; i<n; i+=3)
    {
        check = val.substr(i, 3);
        if (inti == "000") 
        {
            if (check == "001") {
                ans += 'C';
            } else if (check == "010") {
                ans += 'G';1839. Longest Substring Of All Vowels in Order
            } else if (check == "011") {
                ans += 'A';
            } else if (check == "101" || check == "110" ){
                ans += 'T';
            }
        }
        else
        {
            if (check == "001") {
                ans += 'C';
            } else if (check == "010") {
                ans += 'G';
            } else if (check == "011") {
                ans += 'A';
            } else if (check == "101" || check == "110" ){
                ans += 'U';
            }

        }
    }
    cout<<ans;
}

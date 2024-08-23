//Basicaaly Simulation Of Question
class Solution {
public:
    string fractionAddition(string fraction) {
        int lcm = 1;
        int n = fraction.size();
        for (int i=0; i<n; i++ )
        {
            if ( fraction[i] == '/' )
            {
                if ( (fraction[i+1]-'0')%lcm == 0 )
                    lcm = fraction[i+1]-'0';
                else
                    lcm *= (fraction[i+1]-'0');
                i++;
            }
        }
        //LCM is right Tested
        int num = 0, cal, tempNum=0, denom = 1;
        for( int i=0; i<n; i++ )
        {
            if ( fraction[i] == '-' ){
                tempNum -= (fraction[i+1]-'0');
            }
            else if ( fraction[i] == '/' ){
                if ( tempNum == 0 ){
                    tempNum = fraction[i-1]-'0';
                }
                
                denom = fraction[i+1]-'0';
                cal = lcm/denom;
                num += (cal*tempNum);
                i++;
                tempNum = 0;
            }

        }
        
        cout<<num<<"/"<<lcm;
        return "1/2";
    }
};
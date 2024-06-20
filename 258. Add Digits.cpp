class Solution {
public:
    int addDigits(int num) {
        
        while (num >= 10 )
        {
            int sum = 0;
            while( num > 0 )
            {
                sum += num%10;
                num /= 10;
            }
            num = sum;
        }
        return num;
    }
};
//Without Loop Or Recursion
class Solution {
public:
    int addDigits(int num) {
        return 1+((num-1)%9);
    }
};
//https://en.wikipedia.org/wiki/Digital_root
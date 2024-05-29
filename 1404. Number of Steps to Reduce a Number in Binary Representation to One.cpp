// Brute Force Solution If the string is small.
class Solution
{
public:
    int numSteps(string s)
    {
        int n = s.size();
        long long int num = 0, j = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            num += (s[i] - '0') * pow(2, j++);
        }
        cout << num << endl;
        int count = 0;
        while (num != 1)
        {
            if (num % 2 == 0)
                num /= 2;
            else
                num += 1;
            count++;
        }
        return count;
    }
};
// Greedy Solution
// If we closely observe the previous approach, we're essentially removing one bit from the right end each time.
// When the number is even we are directly removing the bit at the rightmost position. In case of an odd number,
// adding one will make it even, and then we will remove the rightmost bit. Hence, it takes one step to remove the
// rightmost bit when the number is even, and it takes two steps when the number is odd.
class Solution
{
public:
    int numSteps(string s)
    {
        int N = s.size();

        int operations = 0;
        int carry = 0;
        for (int i = N - 1; i > 0; i--)
        {
            if (((s[i] - '0') + carry) % 2)
            {
                operations += 2;
                carry = 1;
            }
            else
            {
                operations++;
            }
        }

        return operations + carry;
    }
};
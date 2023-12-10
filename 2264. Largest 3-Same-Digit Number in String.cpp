#include <string>
using namespace std;

class Solution {
public:
    string largestGoodInteger(string num) {
        int n = num.size();
        int count = 1, ans = -1;

        for (int i = 1; i < n; i++) {
            if (num[i - 1] == num[i]) {
                count++;
            } else {
                count = 1;
            }

            if (count == 3) {
                ans = max(ans, num[i] - '0');
                count = 0;
            }
        }

        return (ans == -1) ? "" : string(3, '0' + ans);
    }
};

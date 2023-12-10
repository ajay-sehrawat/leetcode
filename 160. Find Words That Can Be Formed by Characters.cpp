#include <vector>
#include <string>
#include <unordered_map>

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int n = words.size();
        int ans = 0;
        unordered_map<char, int> charCount;

        // Count characters in chars
        for (char c : chars)
            charCount[c]++;

        // Check if words can be formed
        for (int i = 0; i < n; i++) {
            string s = words[i];
            int m = s.size();
            unordered_map<char, int> tempCount(charCount);  // Copy the original counts

            bool canFormWord = true;
            for (int j = 0; j < m; j++) {
                if (tempCount[s[j]] == 0) {
                    canFormWord = false;
                    break;
                }
                tempCount[s[j]]--;
            }

            if (canFormWord) {
                ans += m;  // Increment the answer by the length of the current word
            }
        }

        return ans;
    }
};

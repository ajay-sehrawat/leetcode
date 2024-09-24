class Solution
{
public:
    int longestCommonPrefix(vector<int> &arr1, vector<int> &arr2)
    {
        // Put all elements of arr1 in HashSet, and then check elements in arr2
        // In arr2 check from left side to make process faster;

        unordered_set<string> mp;
        int ans = 0;
        string joint1, joint2;
        for (int i = 0; i < arr1.size(); i++)
        {
            string temp = to_string(arr1[i]);
            joint1 = "";
            for (int j = 0; j < temp.size(); j++)
            {
                joint1 += temp[j];
                mp.insert(joint1);
            }
        }

        for (int i = 0; i < arr2.size(); i++)
        {
            string temp2 = to_string(arr2[i]);
            joint2 = "";
            for (int j = 0; j < temp2.size(); j++)
            {
                joint2 += temp2[j];
                if (mp.find(joint2) != mp.end())
                {
                    ans = std::max(ans, static_cast<int>(joint2.size()));
                }
            }
        }
        return ans;
    }
};
// More Optimized No need of String conversion
class Solution
{
public:
    int longestCommonPrefix(vector<int> &arr1, vector<int> &arr2)
    {
        unordered_set<int> arr1Prefixes; // Set to store all prefixes from arr1

        // Step 1: Build all possible prefixes from arr1
        for (int val : arr1)
        {
            while (!arr1Prefixes.count(val) && val > 0)
            {
                // Insert current value as a prefix
                arr1Prefixes.insert(val);
                // Generate the next shorter prefix by removing the last digit
                val /= 10;
            }
        }

        int longestPrefix = 0;

        // Step 2: Check each number in arr2 for the longest matching prefix
        for (int val : arr2)
        {
            while (!arr1Prefixes.count(val) && val > 0)
            {
                // Reduce val by removing the last digit if not found in the
                // prefix set
                val /= 10;
            }
            if (val > 0)
            {
                // Length of the matched prefix using log10 to determine the
                // number of digits
                longestPrefix =
                    max(longestPrefix, static_cast<int>(log10(val) + 1));
            }
        }

        return longestPrefix;
    }
};
//Trie Solution Efficient and Fast

class Solution {
public:
    bool closeStrings(string s1, string s2) {
        int n = s1.size(), m = s2.size();
        if (n != m)
            return false;
        //Check If They Have Same Set Of Characters and The frequency of any characters matches with ay other.
        vector<int> freq1(26, 0), freq2(26, 0);
        unordered_set<char> set1, set2;

        for (int i = 0; i < n; i++) {
            freq1[s1[i] - 'a']++;
            freq2[s2[i] - 'a']++;
            set1.insert(s1[i]);
            set2.insert(s2[i]);
        }

        
        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());

        return (freq1 == freq2) && (set1 == set2);
    }
};

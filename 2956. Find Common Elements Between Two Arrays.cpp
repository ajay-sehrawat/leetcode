class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> freq;
        unordered_map<int, int> freq2;

        int count1 = 0, count2 = 0;
        for (int i = 0; i < nums1.size(); i++) {
            freq[nums1[i]]++;
        }

        for (int i = 0; i < nums2.size(); i++) {
            if (freq.find(nums2[i]) != freq.end()) {
                count1++;
            }

            freq2[nums2[i]]++;
        }

        for (int i = 0; i < nums1.size(); i++) {
            if (freq2.find(nums1[i]) != freq2.end()) {
                count2++;
            }
        }
        return { count2, count1 };
    }

};
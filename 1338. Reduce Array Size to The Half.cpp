class Solution {
public:
    int minSetSize(std::vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> freq;

        for (int i = 0; i < n; i++)
            freq[arr[i]]++;

        vector<int> fre;
        for (const auto& entry : freq)
            fre.push_back(entry.second);
        
        sort(fre.begin(), fre.end(), greater<int>());

        int count = 0, sum = 0;
        for (int i = 0; i < fre.size(); i++) {
            sum += fre[i];
            count++;
            if (sum >= n / 2)
                return count;
        }
        return -1;
    }
};

class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        // If the total number of cards is not divisible by groupSize, return false
        if (n % groupSize != 0)
            return false;

        unordered_map<int, int> mp;
        // Count the frequency of each card
        for (int i : hand)
            mp[i]++;

        vector<int> uniq;
        // Extract the unique cards
        for (auto& it : mp)
            uniq.push_back(it.first);
        // Sort the unique cards
        sort(uniq.begin(), uniq.end());

        // Try to form groups starting from each unique card
        for (int i : uniq) {
            if (mp[i] > 0) { // If there are cards of this type remaining
                int count = mp[i]; // Number of groups to form starting with this card
                // Attempt to create a group starting from the current card
                for (int j = 0; j < groupSize; ++j) {
                    // If there are not enough cards to form a group, return false
                    if (mp[i + j] < count)
                        return false;
                    // Decrease the count of cards used in forming the group
                    mp[i + j] -= count;
                }
            }
        }
        return true; // All groups were successfully formed
    }
};
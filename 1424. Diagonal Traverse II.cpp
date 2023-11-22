class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        unordered_map<int, vector<int>> groups;

        /*reason we choose the bottom-up, left-to-right order is that the diagonals    move upward and to the right, so by iterating to the upper right, we will visit the squares in the correct order*/
        for ( int row = nums.size()-1; row >= 0; row-- ){
            for ( int col = 0; col<nums[row].size(); col++ )
            {
                int diagonal = row + col;
                groups[diagonal].push_back(nums[row][col]);
            }
        }

        vector<int> ans;
        int curr = 0;
        
        while (groups.find(curr) != groups.end()) {
            for (int num : groups[curr]) {
                ans.push_back(num);
            }
            
            curr++;
        }
        return ans;
    }
};

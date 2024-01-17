class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n = mat[0].size();
        for( int i=0; i<mat.size(); i++ )
        {
            mat[i].push_back(i);
        }
        //Sort will sort the 2S vector each row Lexiographically
        sort(mat.begin(),mat.end());
        vector<int>ans(k);
        for( int i=0; i<k; i++ )
        {
            ans[i] = mat[i][n];
        }
        return ans;
    }
};
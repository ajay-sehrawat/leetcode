#include <vector>

class Solution {
public:
    int numSpecial(std::vector<std::vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        vector<int> rowCount(n, 0);
        vector<int> colCount(m, 0);

        // Count '1' in each row and each column
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (mat[i][j] == 1) {
                    rowCount[i]++;
                    colCount[j]++;
                }
            }
        }

        int count = 0;

        // Check if a cell is special using rowCount and colCount arrays
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (mat[i][j] == 1 && rowCount[i] == 1 && colCount[j] == 1) {
                    count++;
                }
            }
        }

        return count;
    }
};
/*Certainly! The condition `mat[i][j] == 1 && rowCount[i] == 1 && colCount[j] == 1` is checking whether the cell 
at position (i, j) in the matrix is a special cell based on the following criteria:

1. `mat[i][j] == 1`: This part of the condition checks if the value at the current position (i, j) is equal to 1.
 This ensures that the cell contains the value '1'.

2. `rowCount[i] == 1`: This part of the condition checks if the count of '1's in the row i is exactly 1.
 If so, it means that this '1' in the matrix is the only '1' in its row.

3. `colCount[j] == 1`: This part of the condition checks if the count of '1's in the column j is exactly 1.
 If so, it means that this '1' in the matrix is the only '1' in its column.

Combining all three conditions ensures that the cell at position (i, j) is the only '1' in its row and column,
 making it a "special" cell according to the problem's definition.

This approach optimizes the original code by using two separate arrays (`rowCount` and `colCount`) to keep track
of the count of '1's in each row and each column. By doing this, it avoids the need for nested loops to check for uniqueness, resulting in a more efficient solution.*/

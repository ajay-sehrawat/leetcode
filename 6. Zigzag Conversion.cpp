class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.length()) {
            return s;
        }

        int idx = 0, d = 1;
        vector<vector<char>> rows(numRows);

        for (char c : s) {
            rows[idx].push_back(c);
            if (idx == 0) {
                d = 1;
            } else if (idx == numRows - 1) {
                d = -1;
            }
            idx += d;
        }

        string result;
        for (const auto& row : rows) {
            for (char c : row) {
                result += c;
            }
        }

        return result;        
    }
};
/*All we have to do is that we just move up and down. More precisely, if we reach numsRows - 1, we move up next time and if we reach the first row, we move down next time.

We will creat direction variable to handle moving direction. When we move down, the variable has 1. On the other hand, when we move up, the variable has -1.

Create strings horizontally
Now we have an array like this.

1 a     g
2 b   f h
3 c e   i
4 d      
All we have to do is just to concatenate all characters in the same row. But there is a point her*/
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> qu;
        int n = students.size();
        for( int i=0; i<n; i++ )
            qu.push(students[i]);

        int count = 0, i = 0, temp;
        while ( !qu.empty() && count != n )
        {
            if ( qu.front() == sandwiches[i] )
            {
                qu.pop();
                i++;
                count = 0;
            }
            else
            {
                count++;
                temp = qu.front();
                qu.pop();
                qu.push(temp);
            }
        }
        return qu.size();
    }
};
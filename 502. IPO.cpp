//Priority Queue Solution
class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n = profits.size();
        vector<pair<int,int>> projects(n);
        for (int i=0; i<n; i++ )
        {
            projects[i] = {capital[i],profits[i]};
        }
        sort(projects.begin(),projects.end());
        
        priority_queue<int> maxCapital;
        int i =0;
        while( k-- )
        {
            while(i < n && projects[i].first <= w )
            {
                maxCapital.push(projects[i].second);
                i++;
            }
            if ( maxCapital.empty() )
                break;
            
            w += maxCapital.top();
            maxCapital.pop();
        }
        return w;
    }
};
/*
Key Differences
1.Priority Queue Usage:
The first implementation uses a priority queue to always select the project with the maximum profit that can be
afforded at each step.
The second implementation tries to find the maximum profit project that can be afforded, but it 
only picks the maximum profit in the current batch of affordable projects.

2.Sum Calculation:
In the second implementation, sum is reset to 0 in each iteration, which means it only picks one project per iteration, 
and this project is the one with the highest profit in the current batch of affordable projects.
*/
//Sum Method, Doesn't work
class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n = profits.size();
        vector<pair<int,int>> projects(n);
        for (int i=0; i<n; i++ )
        {
            projects[i] = {capital[i],profits[i]};
        }
        sort(projects.begin(),projects.end());
        
        int sum = 0;
        int i =0;
        while( k-- )
        {
            sum = 0;
            while(i < n && projects[i].first <= w )
            {
                sum = max(sum,projects[i].second);
                i++;
            }
            w += sum;
        }
        return w;
    }
};
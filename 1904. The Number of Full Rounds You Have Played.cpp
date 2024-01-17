class Solution {
public:
    int numberOfRounds(string loginTime, string logoutTime) {
        
        int start = 60*stoi(loginTime.substr(0,2)) + stoi(loginTime.substr(3));
        int finish = 60*stoi(logoutTime.substr(0,2)) + stoi(logoutTime.substr(3));

        if ( start > finish )
            finish += 60*24;
        /*Divide startTime and finishTime by 15, and round them UP and DOWN respectively.  In this way we round the startTime and endTime to their next/previous closest 15-minute rounds, respectively. So floor(finish / 15) - ceil(start / 15) is number of rounds inbetween.
Note that if startTime and finishTime are in the same 15-minute round, the above returns -1. We should return max(0, floor(finish / 15) - ceil(start / 15))*/
        return max(0, finish / 15 - (start + 14) / 15); // max(0, floor(finish / 15) - ceil(start / 15))

    }
};
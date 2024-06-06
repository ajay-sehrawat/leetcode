//My method Beats 100%
class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string ans;
        int n = s.size();
        int i = 0;
        
        while(i < n && s[i] == ' ') i++;
        
        while(i < n) {
            int j = i;
            while(j < n && s[j] != ' ') {
                j++;
            }
            st.push(s.substr(i, j-i));
            i = j + 1;
            while(i < n && s[i] == ' ') i++;
        }
        
        while(!st.empty()) {
            ans += st.top();
            st.pop();
            if(!st.empty()) {
                ans += " ";
            }
        }
        
        return ans;
    }
};

//Easy Methdo copied
class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;        // Vector to store individual words
        stringstream ss(s);          // Stringstream object to facilitate word extraction from the string
        string tmp;                  // Temporary string to hold each word

        // Extract words from the stringstream and store them in the vector
        while (ss >> tmp)
            words.push_back(tmp);    // Add each extracted word to the vector

        string ans;                  // String to store the final result

        // Iterate over the vector in reverse order to construct the reversed sentence
        for (int i = words.size() - 1; i >= 0; --i) {
            if (i != words.size() - 1) 
                ans += " "; // Add a space before each word except the first in the reversed order
            ans += words[i];                       // Append the current word to the result string
        }

        return ans;                  // Return the resulting reversed sentence
    }
};


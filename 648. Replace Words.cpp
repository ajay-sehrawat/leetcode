//Did it in 15minutes 
class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        stringstream ss(sentence);
        // Sort The dictionary because of this condition If a derivative can be replaced by more than one root, 
        //replace it with the root that has the shortest length.
        sort(dictionary.begin(),dictionary.end());
        vector<string> store;
        string temp;
        bool flag = true;
        while( ss >> temp )
        {
            flag = true;
            for( int i=0; i<dictionary.size(); i++ )
            {
                if ( dictionary[i] == temp.substr(0,dictionary[i].size()) )
                {
                    store.push_back(dictionary[i]);
                    flag = false;
                    break;
                }
            }
            if ( flag )
            {
                store.push_back(temp);
            } 
        }
        string ans;
        for( int i=0; i<store.size(); i++ )
        {
            ans += store[i];
            if ( i != store.size()-1 ){
                ans += " ";
            }
        }
        return ans;
    }
};
//Optimized by chatgpt

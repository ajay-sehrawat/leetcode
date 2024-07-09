class Solution {
public:
    string reformatDate(string date) {
        unordered_map<string,string> mp = {
        {"Jan", "01"},{"Feb", "02"},{"Mar", "03"},{"Apr", "04"},
        {"May", "05"},{"Jun", "06"},{"Jul", "07"},{"Aug", "08"},
        {"Sep", "09"},{"Oct", "10"},{"Nov", "11"},{"Dec", "12"}};

        int n = date.size();
        string year, mon, dat;
        year = date.substr(n-4,n);
        mon = mp[date.substr(n-8,3)];
        int i =0;
        while( date[i] != ' ' )
        {
            if(date[i] >= '0' && date[i] <= '9' )
                dat += date[i];
            i++;
        }
        if ( dat.size() == 1 )
            dat = "0"+dat;
        return year+"-"+mon+"-"+dat;
    }
};
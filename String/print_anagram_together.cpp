/*

day24

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        vector<vector<string> > Anagrams(vector<string>& string_list) {
        
        map<string, vector<string>> mp;
        
        for( auto str : string_list )
        {
            string s = str;
            sort( s.begin(), s.end() );
            mp[s].push_back(str);
        }
        
        
        vector<vector<string>> ans;
        for( auto it=mp.begin(); it!=mp.end(); it++ )
        {
            ans.push_back(it->second);
        }
        
        return ans;
    }
};

*/
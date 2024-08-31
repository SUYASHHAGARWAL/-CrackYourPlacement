/*

day45


vector<vector<string>> ans;
    
    bool isPalindromic(string str) {
        string reversed = str;
        reverse(reversed.begin(), reversed.end());
        return str == reversed;
    }
    
    void solve(string s, vector<string> temp) {
        if (s.length() == 0) {
            ans.push_back(temp);
            return;
        }
        
        // partition
        for (int i = 1; i <= s.length(); i++) {
            string x = s.substr(0, i);
            string y = s.substr(i);
            
            if (isPalindromic(x)){
                temp.push_back(x);
                solve(y, temp);
            }
            
            else continue;
            
            temp.erase(temp.end() - 1);
        }
    }
    
  public:
    vector<vector<string>> allPalindromicPerms(string S) {
        solve(S, {});
        
        return ans;
    }
    
    
    */
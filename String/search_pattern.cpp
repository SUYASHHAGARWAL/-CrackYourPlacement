/*

day24

class Solution
{
    public:
        vector <int> search(string pattern, string text)
        {
            vector<int> ans;
            //code here.
            int n = text.length();
            int m = pattern.length();
            int i = 0;
            char s = pattern[0];
            while(i < n){
                if(s == text[i]){
                    int t = 0;
                    for(int k=0, l = i; k < m; k++, l++){
                        if(pattern[k] == text[l]){
                            t++;
                        }
                        else{
                            break;
                        }
                    }
                    if(t == m){
                        ans.push_back(i+1);
                    }
                }
                i++;
            }
            // if(ans.size() == 0){
            //     ans.push_back(-1);
            // }
            return ans;
        }
     
};

*/
/*

day18

class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        // code here
        unordered_map<int,int>mp;
        for(auto it:arr){
            mp[it]++;
        }
        for(auto it:arr){
            if(mp.find(it+x)!=mp.end()){
                return 1;
            }
        }
        return -1;
    }
};


*/
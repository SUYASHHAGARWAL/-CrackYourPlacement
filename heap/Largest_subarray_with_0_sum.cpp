/*

day34



class Solution {
  public:
    int maxLen(vector<int>& arr, int n) {
        // Your code here
        int sum =0;
        map<int ,int > mpp;
        int maxl=0;
        int x=0;
        for(int i =0;i<n;i++){
            
            sum+=arr[i];
            
            if(sum == 0){
                maxl = max(maxl, i+1);
            }
            int rem = sum-0;
            if(mpp.find(rem)!=mpp.end()){
                x=i - mpp[rem];
                maxl = max(maxl,x);
            }
            
            if(mpp.find(sum) == mpp.end())
            mpp[sum] = i;
            
            
        }
        
        return maxl;
    }
};


*/
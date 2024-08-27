/*

day39

class Solution {
public:
    int dp[101][10001];
    int dfs(int e,int n){
        if( n== 0 || n == 1){
            return n;
        }
        if(e == 1) return n;
        if(dp[e][n] != -1) return dp[e][n];
        int ans = 1e9;
        int l = 1, r = n;
        while(l <= r){
            int mid = (l+r)/2;
            int left = dfs(e-1,mid-1);
            int right = dfs(e,n-mid);
            ans = min(ans,1 + max(left,right));
            if(left < right) l = mid+1;
            else r = mid-1;
        }
        return dp[e][n] = ans;
    }
    int superEggDrop(int k, int n) {
        memset(dp,-1,sizeof(dp));
        return dfs(k,n);
    }
};


*/
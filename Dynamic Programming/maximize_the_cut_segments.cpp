/*

day36


public int maximizeCuts(int n, int x, int y, int z)
    {
        //Your code here
        int[] dp = new int[n+1];
        int[] itm = new int[]{x,y,z};
        
        for(int i=1; i<=n; i++){
            if(i%itm[0] != 0) dp[i] = Integer.MIN_VALUE;
            else dp[i] = i/itm[0];
        }
        
        for(int i=2; i<4; i++){
            for(int j=1; j<n+1; j++){
                if(j>=itm[i-1]){
                    dp[j] = Math.max(dp[j],dp[j-itm[i-1]]+1);
                }
            }
        }

        return Math.max(0,dp[n]);
    }

    
*/
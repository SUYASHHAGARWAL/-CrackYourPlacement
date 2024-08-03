/*

day18

 // Your code here 
        int ans = -1;
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(v[mid] > x){
                high = mid-1;
            }
            else{
                ans = mid;
                low = mid+1;
            }
        }
        return ans;
        
*/
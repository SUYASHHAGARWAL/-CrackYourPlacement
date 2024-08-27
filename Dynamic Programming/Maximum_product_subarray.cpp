/*

day36

class Solution {
public:
    int maxProduct(std::vector<int>& nums) {
        int ans = INT_MIN;
        int pre = 1, suf = 1;
        int n = nums.size();
        for(int i=0;i<n-1;i++){
            if(pre == 0) pre =1;
            if(suf == 0) suf =1;
            pre = pre*nums[i];
            suf = suf*nums[n-i-1];
            ans = max(ans, max(pre, suf));
        }
        return ans;
    }
};


*/
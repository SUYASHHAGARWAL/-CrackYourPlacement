/*

day2

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int target=0;
        int n=nums.size();
        set<vector<int>> st;
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            int s=i+1;
            int e=n-1;
            while(s<e)
            {
                int sum=nums[i]+nums[s]+nums[e];
                if(sum==target)
                {
                    st.insert({nums[i],nums[s],nums[e]});
                    s++;
                    e--;
                }
                else if(sum>target)
                    e--; // since it is sorted so nums[e]>nums[s]
                else
                    s++;
            }
        }
        for(auto triplets : st) //removes common
            ans.push_back(triplets);
        return ans;
    }
};

*/
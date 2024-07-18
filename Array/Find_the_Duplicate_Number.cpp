/*

day1

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,bool> map;
        for(int i=0;i<nums.size();i++){
            if(map[nums[i]] == true){
                return nums[i];
            }
            map[nums[i]] = true;
        }
        return -1;
    }
};



*/
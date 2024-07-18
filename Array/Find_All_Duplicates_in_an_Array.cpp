/*

day2


class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       vector<int> result; 
       unordered_map<int,int> map;
       for(int i=0;i<nums.size();i++){
        map[nums[i]]++;
       }
       for(auto it : map){
           if(it.second == 2){
               result.push_back(it.first);
           }
       }
       return result;
    }
};


*/
/*

day40


#define pi 3.14159265

class Solution {
public:
    int visiblePoints(vector<vector<int>>& points, int angle, vector<int>& loc) {
        vector<double> arr;
        int count=0;
        for(auto &temp: points){
            if(temp==loc){
                count++;
                continue;
            }
            double x= temp[0]-loc[0], y= temp[1]-loc[1];
            double toPush= atan2(y, x)*180/pi ;
            arr.push_back((toPush<0)? toPush+360: toPush);
        }
        
        sort(arr.begin(),arr.end());
        int ln= arr.size(),i=0,j=0,ans=0;
        for(int i=0;i<ln;i++) arr.push_back(360+ arr[i]);
        
        
        while(j<(2*ln)){
            while(j<(2*ln) && ((arr[j]- arr[i])<= angle)) j++;
            ans= max(ans, j-i);
            i++;
        }
        
        return ans+count;
    }
};


*/
/*

day41


class Solution {
public:
    int minDeletions(string s) {
        vector<int> count(26,0);
        for(int i=0;i<s.size();i++){
            char c = s[i];
            count[c-'a']++;
        }

        vector<int> uniqueFreq;
        int ans = 0;
        for(int i=0;i<26;i++){
            int frq = count[i];
            while(find(uniqueFreq.begin(),uniqueFreq.end(),frq)!=uniqueFreq.end()){
                frq--;
                ans++;
            }
            if(frq>0){
                uniqueFreq.push_back(frq);
            }
        }
        return ans;
    }
};


*/
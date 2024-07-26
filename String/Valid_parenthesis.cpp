/*

day10

class Solution {
public:
    bool isValid(string s) {
           stack<char> stck;
        //having an unordered_map so that its easier to check instead of writing a lot of if-else loops
        unordered_map<char,char> m;
        m[')']='(';
        m[']']='[';
        m['}']='{';
        for(auto i: s){
            if(stck.size()==0){ // if stack size = 0, just insert
                stck.push(i);
            }else{
                auto tp = stck.top();
                if(tp == m[i]){
                    
                    stck.pop();
                }else{
                    // if its not a combination, just insert the element
                    stck.push(i);
                }
            }
        }
        return stck.size()==0;
    }
};


*/
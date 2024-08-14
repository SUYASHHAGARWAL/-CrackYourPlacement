/*

day29

  vector<pair<int,int>> dir = {{0,1},{1,0},{0,-1},{-1,0}};
    
    string getDir(int i) {
        switch(i) {
            case 0:
                return "R";
            case 1:
                return "D";
            case 2:
                return "L";
            case 3:
                return "U";
        }
        return "";
    }
    
    bool isSafe(int i, int j, vector<vector<int>> &mat) {
        if(i >= 0 && i < mat.size() && j >= 0 && j < mat[0].size() && mat[i][j])
            return true;
        return false;
    }
    
    void dfs(int i, int j, string path, vector<vector<int>> &mat, vector<string> &ans) {
        if(i == mat.size()-1 && j == mat.size()-1) {
            ans.push_back(path);
            return;
        }
        
        for(int k = 0; k < dir.size(); k++) {
            int p = i + dir[k].first;
            int q = j + dir[k].second;
            
            if(isSafe(p,q,mat)) {
                mat[i][j] = 0;
                dfs(p,q,path+getDir(k),mat,ans);
                mat[i][j] = 1;
            }
        }
        
    }
    
    vector<string> findPath(vector<vector<int>> &mat) {
        vector<string> ans;
        
        if(mat[0][0] == 0 || mat[mat.size()-1][mat.size()-1] == 0)
            return ans;
            
        dfs(0,0,"",mat,ans);
        return ans;
    }
    
    
    */
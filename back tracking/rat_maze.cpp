/*

day45


 vector<vector<int>> ShortestDistance(vector<vector<int>>&matrix){
      vector<vector<int>>ans(matrix.size(),vector<int>(matrix[0].size(),0));
      if(!solve(matrix,ans,0,0)) {
          return {{-1}};
      }
      return ans;
    }
    bool withinBoundary(int i, int j, vector<vector<int>>matrix) {
        if(i>=matrix.size() || j>=matrix[0].size() || matrix[i][j]==0) return false;
        return true;
    }
    bool solve(vector<vector<int>>&matrix, vector<vector<int>>&ans, int i, int j) {
        if(i==matrix.size()-1 && j == matrix[0].size()-1) {
            ans[i][j] = 1;
            return true;
        }
        if(withinBoundary(i,j,matrix)) {
            ans[i][j] = 1;
            for(int noofSteps = 1; noofSteps<=matrix[i][j];noofSteps++) {
                if(solve(matrix,ans,i,j+noofSteps)) return true;
                if(solve(matrix,ans,i+noofSteps,j)) return true;
            }
            ans[i][j] = 0;
            
        }
        return false;
    }
    
    */
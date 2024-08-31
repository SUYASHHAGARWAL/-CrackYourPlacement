/*

day45


class Solution {
public:
    int solve(int row, int col, vector<vector<int>>& grid, vector<vector<int>>& visited, int m, int n, int count, int walk){
        if(row<0 || col<0 || row > m-1 || col>n-1 || grid[row][col] == -1){
            return 0;
        }
        if(grid[row][col] == 2){
            if(count==walk)
                return 1;
            
            return 0;
        }
        if(visited[row][col]){
            return 0;
        }
  
        visited[row][col] = 1;

        int up = solve(row-1,col,grid,visited,m,n,count+1,walk);
 
        int right = solve(row,col+1,grid,visited,m,n,count+1,walk);
        
        int down = solve(row+1,col,grid,visited,m,n,count+1,walk);
       
        int left = solve(row,col-1,grid,visited,m,n,count+1,walk);

        visited[row][col] = 0;
        return up+right+down+left;

    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        int m = grid.size(); //rows
        int n = grid[0].size(); //cols

        vector<vector<int>> visited(m,vector<int>(n,0));
        int walk = 0;
        int count=0;
        int row=0,col=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == 1){
                    row=i;
                    col=j;
                }
                if(grid[i][j] == 0 || grid[i][j] == 2){
                    walk++;
                }
            }
        }
       
        // cout<<walk<<endl;
        return solve(row, col, grid, visited, m, n, count,walk);
    }
};

*/
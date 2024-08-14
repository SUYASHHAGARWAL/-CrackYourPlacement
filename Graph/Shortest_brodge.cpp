/*

day29

//find all tiles of island1 and do bfs from each tile 
//return the shorted distance

class Solution {
    int n;
    vector<vector<int>> vis;
    int drc[5] = {0, 1, 0, -1, 0}; //to traverse neighbours

    void dfs(int r, int c, vector<vector<int>>& grid, queue< pair<pair<int,int>, int> >& q) { //push entire island1 in queue
        vis[r][c] = 1;
        q.push({{r,c}, 0});
        cout<<r<<" "<<c<<endl;

        for(int i=0;i<4;i++){
            int nr = r + drc[i];
            int nc = c + drc[i+1];
            if(nr>=0 && nr<n && nc>=0 && nc<n && !vis[nr][nc] && grid[nr][nc] == 1){
                dfs(nr,nc,grid,q);
            }
        }

        return;
    }
public:
    int shortestBridge(vector<vector<int>>& grid) {
        n = grid.size();
        vis.resize(n, vector<int>(n, 0));
        queue<pair< pair<int, int>, int >> q;
        int flag = 1; // need to break 2 loops
        for(int i=0;i<n && flag;i++){
            for(int j=0;j<n && flag;j++){
                if(grid[i][j] == 1){
                    dfs(i, j, grid, q);
                    flag = 0;
                }
            }
        }

        //q has entire island1 in it now

        while(!q.empty()) {
            auto it = q.front();
            int x = it.first.first;
            int y = it.first.second;
            int dist = it.second;
            q.pop();

            vis[x][y] = 1;

            for(int i=0;i<4;i++){
                int nx = x + drc[i];
                int ny = y + drc[i+1];

            if(nx>=0 && nx<n && ny>=0 && ny<n && !vis[nx][ny]) {
                if(grid[nx][ny] == 1) return dist; //an unvisited piece of land, means island2
                q.push({{nx,ny}, dist+1});
                vis[nx][ny] = 1;
            }

            }
        }

        return -1;
    }
};

*/
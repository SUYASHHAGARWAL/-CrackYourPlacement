/*

day30

class Solution {
public:
    int n;

    void dfs(int i, vector<int> &vis, vector<vector<int>>& stones) {
        vis[i] = 1;
        for (int j = 0; j < n; j++) {
            if (!vis[j]) {
                if (stones[i][0] == stones[j][0] || stones[i][1] == stones[j][1]) {
                    dfs(j, vis, stones); 
                }
            }
        }
    }

    int removeStones(vector<vector<int>>& stones) {
        n = stones.size(); 
        vector<int> vis(n, 0); 
        int ans = 0; 
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                dfs(i, vis, stones); 
                ans++;
            }
        }
        return n - ans; 
    }
};


*/
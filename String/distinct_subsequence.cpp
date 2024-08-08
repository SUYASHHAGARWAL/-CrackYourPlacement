/*

day24

class Solution {
public:
    // O(n * m) time | O(n * m) space
    int numDistinct(string s, string t) {
        int n = s.size();
        int m = t.size();

        vector<vector<int>> dp(n, vector<int>(m, -1)); 
        return dfs(0, 0, s, t, dp);
    }

    int dfs(int sIndex, int tIndex, const string& s, const string& t, 
        vector<vector<int>>& dp) {
        
        if (tIndex == t.size()) return 1;
        if (sIndex == s.size()) return 0;
        if (dp[sIndex][tIndex] != -1) return dp[sIndex][tIndex];

        int res = 0;
        if (s[sIndex] == t[tIndex]) {
            res += dfs(sIndex + 1, tIndex + 1, s, t, dp);
        }
        res += dfs(sIndex + 1, tIndex, s, t, dp);
        dp[sIndex][tIndex] = res;
        return res;
    }
};

*/
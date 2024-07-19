/*

day3

class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
   void solve(int src,vector<int>adj[],vector<int>&ans,vector<int>&arr)
    {
        arr[src]=1;
        ans.push_back(src);
        for(auto it: adj[src])
        {
            if(arr[it]==0)
            {
                solve(it,adj,ans,arr);
            }
        }
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int>ans;
        vector<int>arr(V,0);
        solve(0,adj,ans,arr);
        return ans;
    }
};

*/
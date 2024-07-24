/*

day8

class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	
	void topo(int node,unordered_map<int,bool> &visited,stack<int> &s,vector<int> adj[] ){
	    visited[node] = 1;
	    for(auto n: adj[node]){
	        if(!visited[n]){
	            topo(n,visited,s,adj);
	        }
	    }
	    s.push(node);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    unordered_map<int,bool> visited;
	    stack<int> s;
	    for(int i=0;i<V;i++){
	        if(!visited[i]){
	            topo(i,visited,s,adj);
	        }
	    }
	    vector<int> ans;
	    while(!s.empty()){
	        ans.push_back(s.top());
	        s.pop();
	    }
	    return ans;
	}
};

*/
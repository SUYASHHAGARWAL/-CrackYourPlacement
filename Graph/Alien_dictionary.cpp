/*

day32

class Solution{
    public:
    void topo(vector<int>adj[], stack<int>&st, vector<int>&vis, int src){
        vis[src] = 1;
        
        for(auto it: adj[src]){
            if(!vis[it]){
                topo(adj, st, vis, it);
            }
        }
        
        st.push(src);
    }
    string findOrder(string dict[], int N, int K) {
        //code here
        vector<int>adj[K];
        vector<int>vis(K, 0);
        string ans;
        
        for(int i=0;i<N-1;i++){
            int j=0;
            int n = dict[i].size();
            int m = dict[i+1].size();
            
            int len = min(n, m);
            
            while(j<len && dict[i][j] == dict[i+1][j])
                j++;
            
            if(j!=len){
                adj[dict[i][j] - 'a'].push_back(dict[i+1][j] - 'a');
            }
        }
        
        stack<int>st;
        for(int i=0;i<K;i++){
            if(!vis[i])
                topo(adj, st, vis, i);
        }
        
        while(!st.empty()){
            int f = st.top();
            st.pop();
            char ch = f + 'a';
            ans = ans + ch;
        }
        
        return ans;
    }
};


*/